#include<stdio.h>
#include<string.h>
int main(){
    int c;
    scanf("%d",&c);
    while(c--){
        char s[100000];
        scanf("%s",&s);
        int l=strlen(s);
        printf("%.2f\n",(double)l/100);
    }
    return 0;
}