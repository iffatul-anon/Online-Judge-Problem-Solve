#include<stdio.h>
#include<string.h>
int main(){
    while(1){
        char c[2],s[100000],s2[100000];
        scanf("%s",&c);
        scanf("%s",&s);
        if(c[0]=='0' && s[0]=='0'){
            break;
        }
        int x=0;
        for(int i=0;i<strlen(s);i++){
            if(s[i]!=c[0]){
                s2[x++]=s[i];
            }
        }
        int flag=0;
        for(int i=0;i<x;i++){
            if(flag==0 && s2[i]=='0'){
                continue;
            }
            flag=1;
            printf("%c",s2[i]);
        }
        if(flag==0){
            printf("0");
        }
        printf("\n");
    }
    return 0;
}