#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++) if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u') printf("%c",s[i]);
}           