#include<stdio.h>
int main(){
    long long int a,b;
    while(EOF!=scanf("%lld %lld",&a,&b)){
        int sum=0;
        while(b>0){
            sum=sum+(b%10);
            b=b/10;
        }
        if(sum%3==0){
            printf("%d sim\n",sum);
        }
        else{
            printf("%d nao\n",sum);
        }
    }
    return 0;
}