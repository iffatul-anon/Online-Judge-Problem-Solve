#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n;
        scanf("%lld",&n);
        int a[n+1];
        if(n%2){
            for(int i=1;i<=n;i++){
                if(i%2==1) printf("%lld ",i);
            }
            for(int i=n;i>0;i--){
                if(i%2==0) printf("%lld ",i);
            }
            printf("\n");
        }
        else printf("-1\n");
    }
}