#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,max=0,x,y,z=0;
        scanf("%d",&n);
        int a[n];
        map<int,int>mp;
        map<int,int>:: iterator it;
        for(int i=0;i<n;i++) {
            scanf("%d",&x);
            mp[x]++;
        }
        it=mp.begin();
        while(it!=mp.end()){
            a[z++]=it->first;
            it++;
        }
        for(int i=0;i<z;i++) {
            y=lower_bound(a,a+z,a[i]+n)-a-i;
            if(y>max) max=y;
        }
        printf("%d\n",max);
    }
}