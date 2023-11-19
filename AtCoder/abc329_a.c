#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++) printf("%c ",s[i]);
    printf("\n");
}