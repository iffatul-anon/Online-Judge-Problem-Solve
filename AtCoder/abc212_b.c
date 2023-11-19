#include<stdio.h>
#include<string.h>
int main(){
    char s[5];
    scanf("%s",s);
    if((s[0]==s[1] && s[0]==s[2] && s[0]==s[3]) || ((s[0]+1==s[1] || (s[0]=='9' && s[1]=='0')) && (s[1]+1==s[2] || (s[1]=='9' && s[2]=='0')) && (s[2]+1==s[3] || (s[2]=='9' && s[3]=='0')))) printf("Weak\n");
    else printf("Strong\n");
}