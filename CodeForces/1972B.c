#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,c=0;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        for(int i=0;i<n;i++) if(s[i]=='U') c++;
        if(c%2) printf("YES\n");
        else printf("NO\n");
    }
}