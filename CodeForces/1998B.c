#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n;
        scanf("%lld",&n);
        int p[n];
        for(int i=0;i<n;i++) scanf("%lld",&p[i]);
        for(int i=0;i<n;i++){
            if(p[i]==n) printf("1 "); 
            else printf("%lld ",p[i]+1);
        }
        printf("\n");
    }
}