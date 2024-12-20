#include<stdio.h>
#define int long long
signed main() {
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,ss=0,pp=0;
        scanf("%lld",&n);
        char s[n+1];
        scanf("%s",s);
        for(int i=0;i<n;i++){
            if(s[i]=='p') pp++;
            else if(s[i]=='s') ss++;
        }
        if(ss==0 || pp==0) printf("YES\n");
        else if(ss==1 && s[0]=='s') printf("YES\n");
        else if(pp==1 && s[n-1]=='p') printf("YES\n");
        else printf("NO\n");
    }
}