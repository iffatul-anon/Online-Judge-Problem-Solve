#include<stdio.h>
#include<string.h>
int main(){
    char s[101];
    scanf("%s",s);
    int count=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='#' && count<10) count++;
        else if(s[i]=='.' && count>0) count--;
        printf("%d\n",count);
    }
}