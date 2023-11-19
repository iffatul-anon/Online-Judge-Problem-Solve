#include<stdio.h>
#include<string.h>
int main(){
    char s[1000010],s2[1000010];
    scanf("%s",s);
    int sum=0,x=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]==')' || s[i]=='}' || s[i]==']' || s[i]=='>'){
            x--;
            if((s2[x]=='(' && s[i]!=')') || (s2[x]=='{' && s[i]!='}') || (s2[x]=='[' && s[i]!=']') || (s2[x]=='<' && s[i]!='>')) sum++;
        }
        else s2[x++]=s[i];
        if(x<0){
            printf("Impossible\n");
            return 0;
        }
    }
    if(x==0) printf("%d\n",sum);
    else printf("Impossible\n");
}