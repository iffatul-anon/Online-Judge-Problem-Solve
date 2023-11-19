#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%s",s);
    int f=0;
    for(int i=0;i<strlen(s)-1;i++){
        if(s[i]<=s[i+1]){
            f=1;
            break;
        }
    }
    if(f==0) printf("Yes\n");
    else printf("No\n");
}