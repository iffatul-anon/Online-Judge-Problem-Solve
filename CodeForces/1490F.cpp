#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,min=1000000000;
        scanf("%d",&n);
        map<int,int>mp;
        map<int,int>:: iterator it;
        for(int i=0;i<n;i++){
            scanf("%d",&x);
            mp[x]++;
        }
        int a[mp.size()];
        x=0;
        for(it=mp.begin();it!=mp.end();it++) a[x++]=it->second;
        sort(a,a+x);
        for(int i=0;i<x;i++) if(n-(a[i]*(x-i))<min) min=n-(a[i]*(x-i));
        printf("%d\n",min);
    }
}