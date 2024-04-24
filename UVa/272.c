#include<stdio.h>
#include<string.h>
int main(){
    char s[100000];
    int c=0;
    while(gets(s)){
        for(int i=0;s[i];i++){
            if(s[i]=='"'){
                c++;
                if(c%2) printf("``");
                else printf("''");
            }
            else printf("%c",s[i]);
        }
        printf("\n");
    }
}