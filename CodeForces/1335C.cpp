#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a,max=0,x;
        scanf("%d",&n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            mp[a]++;
            if(mp[a]>max) max=mp[a];
        }
        x=mp.size();
        if(x>max) printf("%d\n",max);
        else if(x==max) printf("%d\n",x-1);
        else printf("%d\n",x);
    }
}