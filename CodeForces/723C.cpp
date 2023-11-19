#include<iostream>
#include<map>
using namespace std;
int main(){
    int n,m,x,c=0;
    scanf("%d %d",&n,&m);
    int a[n];
    x=n/m;
    map<int,int>mp;
    for(int i=1;i<=m+1;i++) mp[i]=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        mp[a[i]]++;
    }
    map<int,int>:: iterator it=mp.begin();
    for(int i=0;i<n;i++){
        while(it->second>=x) it++;
        if(it->first>m) break;
        if(a[i]>m || mp[a[i]]>x){
            c++;
            mp[a[i]]--;
            a[i]=it->first;
            it->second++;
        }
    }
    printf("%d %d\n",x,c);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
}