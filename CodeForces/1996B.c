#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,k;
        scanf("%lld %lld",&n,&k);
        char s[n][n+1];
        for(int i=0;i<n;i++) scanf("%s",s[i]);
        for(int i=0;i<n;i=i+k){
            for(int j=0;j<n;j=j+k){
                printf("%c",s[i][j]);
            }
            printf("\n");
        }
    }
}