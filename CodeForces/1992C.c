#include<stdio.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,m,k;
        scanf("%lld %lld %lld",&n,&m,&k);
        for(int i=n;i>m;i--) printf("%lld ",i);
        for(int i=1;i<=m;i++) printf("%lld ",i);
        printf("\n");
    }
}