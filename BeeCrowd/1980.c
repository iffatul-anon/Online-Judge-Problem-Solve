#include<stdio.h>
#include<string.h>
int main(){
    while(1){
        char s[20];
        scanf("%s",&s);
        if(s[0]=='0'){
            return 0;
        }
        int l=strlen(s);
        long long int sum=1;
        for(int i=1;i<=l;i++){
            sum=sum*i;
        }
        printf("%lld\n",sum);
    }
}