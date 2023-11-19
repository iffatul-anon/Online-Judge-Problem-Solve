#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%s",&s);
    int flag=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='"'){
            flag++;
        }
        if(flag==1 && s[i]!='"'){
            printf("%c",s[i]);
        }
    }
    return 0;
}