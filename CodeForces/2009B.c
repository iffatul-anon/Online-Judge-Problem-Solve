#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n;
        scanf("%lld",&n);
        char s[n][5];
        for(int i=0;i<n;i++) scanf("%s",s[i]);
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<4;j++){
                if(s[i][j]=='#'){
                    printf("%lld ",j+1);
                    break;
                }
            }
        }
        printf("\n");
    }
}