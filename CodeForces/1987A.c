#include<stdio.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,k;
        scanf("%lld %lld",&n,&k);
        printf("%lld\n",(n*k)-k+1);
    }
}