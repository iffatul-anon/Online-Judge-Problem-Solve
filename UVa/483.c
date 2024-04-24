#include<stdio.h>
#include<string.h>
int main(){
    char s[100000];
    while(gets(s)){
        for(int i=0;s[i];i++){
            if(s[i+1]==' ' || s[i+1]==0){
                for(int j=i;j>=0;j--){
                    if(s[j]==' ') break;
                    printf("%c",s[j]);
                }
                if(s[i+1]!=0) printf(" ");
            }
        }
        printf("\n");
    }
}