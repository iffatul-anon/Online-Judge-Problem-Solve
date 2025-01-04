#include<stdio.h>
#define int long long
signed main() {
    int t;
    scanf("%lld", &t);
    while(t--){
        int n,m,ans=0;
        scanf("%lld %lld", &n, &m);
        if(n>m) ans=n;
        else ans=m;
        ans++;
        printf("%lld\n",ans);
    }
}