#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    while(gets(s)){
        int a[28]={0};
        for(int i=0;i<strlen(s);i++){
            if(s[i]>='a' && s[i]<='z'){
                a[s[i]-96]=1;
            }
        }
        char s2[50],x=0;
        char c[27]="abcdefghijklmnopqrstuvwxyz\0";
        for(int i=1;i<27;i++){
            if(a[i-1]==0 && a[i]==1){
                s2[x++]=c[i-1];
                s2[x++]=':';
            }
            if(a[i]==1 && a[i+1]==0){
                s2[x++]=c[i-1];
                s2[x++]=',';
                s2[x++]=' ';
            }
        }
        for(int i=0;i<x-2;i++){
            printf("%c",s2[i]);
        }
        printf("\n");
    }
    return 0;
}