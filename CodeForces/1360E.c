#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,f=1;
        scanf("%lld",&n);
        char s[n][n+1];
        for(int i=0;i<n;i++) scanf("%s",s[i]);
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                if(s[i][j]=='1' && s[i][j+1]=='0' && s[i+1][j]=='0') f=0;
            }
        }
        if(f) printf("YES\n");
        else printf("NO\n");
    }
}
