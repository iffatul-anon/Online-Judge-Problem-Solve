#include<stdio.h>
#include<string.h>
int main(){
    char s1[101],s2[101];
    scanf("%s",&s1);
    scanf("%s",&s2);
    int n=strcasecmp(s1,s2);
    if(n==0){
        printf("EQUAL\n");
    }
    else if(n>0){
        printf("GREATER\n");
    }
    else if(n<0){
        printf("SMALLER\n");
    }
    return 0;
}