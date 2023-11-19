#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        char s[10];
        scanf("%s",&s);
        if(strlen(s)==5){
            printf("3\n");
        }
        else{
            if((s[0]=='o' && s[1]=='n')||(s[0]=='o'&&s[2]=='e')||(s[1]=='n'&&s[2]=='e')){
                printf("1\n");
            }
            else{
                printf("2\n");
            }
        }
    }
    return 0;
}