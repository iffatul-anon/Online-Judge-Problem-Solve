#include<stdio.h>
int main(){
    long long a,b,c,d,x;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    x=(((((a*b)%1000000000)*c)%1000000000)*d)%1000000000;
    if(x%100<10) printf("0%lld\n",x%100);
    else printf("%lld\n",x%100);
}