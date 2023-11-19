#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    scanf("%s",&s);
    int count=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='1'){
            count++;
        }
    }
    if(count%2==0){
        printf("%s0\n",s);
    }
    else{
        printf("%s1\n",s);
    }
    return 0;
}