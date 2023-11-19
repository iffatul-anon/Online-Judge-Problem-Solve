#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int n;
    while(EOF!=scanf("%s",&s)){
        scanf("%d",&n);
        int count=0;
        int x=0;
        for(int i=0;i<strlen(s);i++){
            if(s[i]=='W'){
                count++;
                if(x>0){
                    count++;
                    x=0;
                }
            }
            else{
                x++;
                if(x==n){
                    count++;
                    x=0;
                }
            }
        }
        if(x>0){
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}