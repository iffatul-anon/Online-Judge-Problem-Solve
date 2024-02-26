#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    scanf("%s",s);
    if(s[0]>'Z') printf("No\n");
    else{
        for(int i=1;i<strlen(s);i++){
            if(s[i]<'a'){
                printf("No\n");
                return 0;
            }
        }
        printf("Yes\n");
    }
}