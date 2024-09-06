#include<stdio.h>
#define int long long
#define MOD 1000000007
int modInverse(int a) {
    int ans = 1, p = MOD - 2;
    while (p > 0) {
        if (p % 2 == 1) {
            ans = (ans * a) % MOD;
        }
        a = (a * a) % MOD;
        p /= 2;
    }
    return ans;
}
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,sum=0,ans=0;
        scanf("%lld",&n);
        int a[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        sum=(a[0]+a[1]);
        ans=(a[0]*a[1])%MOD;
        for(int i=2;i<n;i++){
            ans=(ans+((sum*a[i])%MOD))%MOD;
            sum=(sum+a[i])%MOD;
        }
        sum=((n*(n-1))/2)%MOD;
        sum=modInverse(sum);
        printf("%lld\n",(ans*sum)%MOD);
    }
}