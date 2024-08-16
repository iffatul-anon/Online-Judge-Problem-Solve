#include<stdio.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,c=0;;
        scanf("%lld",&n);
        char s[2][n+1];
        scanf("%s",s[0]);
        scanf("%s",s[1]);
        for(int i=0;i<n-2;i++){
            if(s[0][i]=='x' && s[0][i+1]=='.' && s[0][i+2]=='x' && s[1][i]=='.' && s[1][i+1]=='.' && s[1][i+2]=='.') c++;
            if(s[0][i]=='.' && s[0][i+1]=='.' && s[0][i+2]=='.' && s[1][i]=='x' && s[1][i+1]=='.' && s[1][i+2]=='x') c++;
        }
        printf("%lld\n",c);
    }
}