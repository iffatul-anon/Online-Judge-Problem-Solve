#include<stdio.h>
#include<string.h>
int main(){
    char s[20];
    scanf("%s",s);
    int l=strlen(s),c=0;
    for(int i=0;i<l/2;i++) if(s[i]!=s[l-i-1]) c++;
    if(c==1 || (c==0 && l%2==1) ) printf("YES\n");
    else printf("NO\n");
}