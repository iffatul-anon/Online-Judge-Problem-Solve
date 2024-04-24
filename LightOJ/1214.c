#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        char s[1000];
        scanf("%s",s);
        long long l=strlen(s),a=0,b,j=0;
        scanf("%lld",&b);
        b=abs(b);
        if(s[j]=='-') j++;
        while(j<l){
            a=(a*10)+s[j++]-'0';
            a=a%b;
        }
        if(a==0) printf("Case %d: divisible\n",i);
        else printf("Case %d: not divisible\n",i);
    }
}
