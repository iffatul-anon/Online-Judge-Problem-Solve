#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1000000];
        scanf("%s",s);
        int x=0,y=strlen(s)-1;
        for(int i=0;i<strlen(s);i++){
            if(s[i]=='1') x=i;
            if(s[i]=='0'){
                y=i;
                break;
            }
        }
        printf("%d\n",y-x+1);
    }
}