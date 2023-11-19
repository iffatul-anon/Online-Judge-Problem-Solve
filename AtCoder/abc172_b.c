#include<stdio.h>
#include<string.h>
int main(){
        int c=0;
        char s[1000000],t[1000000];
        scanf("%s %s",s,t);
        for(int i=0;i<strlen(s);i++) if(s[i]!=t[i]) c++;
        printf("%d\n",c);
}