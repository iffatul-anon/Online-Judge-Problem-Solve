#include<stdio.h>
#define MOD 1000000007
long long modInverse(long long base,long long mod) {
    long long ans = 1,pow = mod - 2;
    while (pow) {
        if (pow & 1) ans = (ans * base) % MOD;
        base = (base * base) % MOD;
        pow >>= 1;
    }
    return ans;
}
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        
    }
}