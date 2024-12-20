#include<stdio.h>
#define int long long
signed main() {
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,x,y;
        scanf("%lld %lld %lld",&n,&x,&y);
        int a[n+2];
        for(int i=1;i<=n;i++) a[i]=i%2;
        if(n%2) a[n]=2;
        if(a[x]==a[y]) a[y]=2;
        if(a[n-1]==a[n]) a[n]=0;
        for(int i=1;i<=n;i++) printf("%lld ",a[i]);
        printf("\n");
    }
}