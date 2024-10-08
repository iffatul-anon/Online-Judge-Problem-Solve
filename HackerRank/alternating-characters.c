#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1000000];
        scanf("%s",s);
        int sum=0,c=1;
        for(int i=1;i<strlen(s);i++){
            if(s[i-1]==s[i]) c++;
            else if(c>1){
                sum+=c-1;
                c=1;
            }
        }
        if(c>1) sum+=c-1;
        printf("%d\n",sum);
    }
}