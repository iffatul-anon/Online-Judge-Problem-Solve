#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        char s1[100],s2[100];
        scanf("%s %s",&s1,&s2);
        for(int i=0;i<strlen(s1) || i<strlen(s2);i++){
            if(i<strlen(s1)){
                printf("%c",s1[i]);
            }
            if(i<strlen(s2)){
                printf("%c",s2[i]);
            }
        }
        printf("\n");
    }
    return 0;
}