#include<stdio.h>
#include<string.h>
int main(){
    char s[1000000];
    scanf("%s",s);
    long long ans=1,count=0;
    for(int i=0;i<strlen(s);i++){
        int a=s[i]+s[i+1]-96;
        if(a==9) count++;
        else{
            int b=s[i]+s[i-1]-96;
            if(b==9 && count%2==0) ans*=(count/2)+1;
            count=0;
        }
    }
    printf("%lld\n",ans);    
}