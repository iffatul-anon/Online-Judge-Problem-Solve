#include<stdio.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n;
        scanf("%lld",&n);
        char s[n+1];
        scanf("%s",s);
        if(s[0]==s[n-1]) printf("NO\n");
        else printf("YES\n");
    }
}