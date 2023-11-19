#include <stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,count=0;
        scanf("%d %d",&n,&m);
        char s[n][m+1],s2[5]="vika";
        for(int i=0;i<n;i++) scanf("%s",s[i]);
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                if(s[i][j]==s2[count]){
                    count++;
                    break;
                }
            }
            if(count==4) break;
        }
        if(count==4) printf("YES\n");
        else printf("NO\n");
    }
}