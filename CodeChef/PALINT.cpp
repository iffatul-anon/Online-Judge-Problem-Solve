#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,x,mx=-1,ok,mn=1000000000000000,anon,ans;
        scanf("%lld %lld",&n,&x);
        int a[n],b[n];
        map<int,int>mp,mp2;
        for(int i=0;i<n;i++) {
            scanf("%lld",&a[i]);
            mp2[a[i]]++;
            mp[a[i]]++;
            b[i]=a[i]^x;
            if(b[i]!=a[i]) mp[b[i]]++;
        }
        for(auto i:mp){
            if(i.second>mx) {
                mx=i.second;
            }
        }
        sort(a,a+n);
        for(auto i:mp){
            if(i.second==mx){
                ok=i.first;
                if(mp2[ok]) anon=mp2[ok];
                else anon=0;
                if(mx-anon<mn) mn=mx-anon;
            }
        }
        printf("%lld %lld\n",mx,mn);
    }
}
