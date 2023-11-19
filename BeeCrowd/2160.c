#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    gets(s);
    if(strlen(s)<=80){
    printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}