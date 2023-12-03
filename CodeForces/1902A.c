#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,c=0;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        for(int i=0;i<n;i++) if(s[i]=='0') c++;
        if(c==0) printf("NO\n");
        else printf("YES\n");
    }
}