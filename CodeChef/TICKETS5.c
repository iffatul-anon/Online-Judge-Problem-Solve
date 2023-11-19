#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int f=0,l;
        char s[1000];
        scanf("%s",s);
        l=strlen(s);
        for(int i=0;i<l-2;i=i+2) if(s[i]!=s[i+2]) f=1;
        for(int i=1;i<l-2;i=i+2) if(s[i]!=s[i+2]) f=1;
        if(f==0 && s[0]!=s[1]) printf("YES\n");
        else printf("NO\n");
    }
}