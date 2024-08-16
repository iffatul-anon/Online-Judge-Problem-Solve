#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,m,c,ok;
        scanf("%lld %lld",&n,&m);
        char s[n][m+1],s2[m+1];
        for(int i=0;i<n;i++) scanf("%s",s[i]);
        for(int i=0;i<m;i++){
            for(int i=0;i<m;i++) s2[i]=s[0][i];
            s2[m]=0;
            for(char j='a';j<='z';j++){
                s2[i]=j;
                ok=0;
                for(int x=0;x<n;x++){
                    c=0;
                    for(int y=0;y<m;y++){
                        if(s[x][y]!=s2[y]) c++;
                    }
                    if(c>1) break;
                    ok++;
                }
                if(ok==n) break;
            }
            if(ok==n) break;
        }
        if(ok==n) printf("%s\n",s2);
        else printf("-1\n");
    }
}