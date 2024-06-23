#include<iostream>
#include<algorithm>
#include<map>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,m,f=0;
        scanf("%lld",&n);
        int a[n],b[n],aa[n],bb[n];
        map<int,int>mp,mp2;
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        for(int i=0;i<n;i++) {
            scanf("%lld",&b[i]);
            mp2[b[i]]++;
        }
        scanf("%lld",&m);
        int d[m];
        for(int i=0;i<m;i++) {
            scanf("%lld",&d[i]);
            mp[d[i]]++;
        }
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                if(mp[b[i]]) mp[b[i]]--;
                else f=1;
            }
        }
        if(f) printf("NO\n");
        else if(mp2[d[m-1]])printf("YES\n");
        else printf("NO\n");
    }
}