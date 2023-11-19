#include<stdio.h>
#include<string.h>
int main(){
    char s1[1000],s2[1000],s3[1000];
    gets(s1);
    gets(s2);
    gets(s3);
    printf("%s%s%s\n",s1,s2,s3);
    printf("%s%s%s\n",s2,s3,s1);
    printf("%s%s%s\n",s3,s1,s2);
    for(int i=0;i<strlen(s1) && i<10;i++){
        printf("%c",s1[i]);
    }
    for(int i=0;i<strlen(s2) && i<10;i++){
        printf("%c",s2[i]);
    }
    for(int i=0;i<strlen(s3) && i<10;i++){
        printf("%c",s3[i]);
    }
    printf("\n");
    return 0;
}