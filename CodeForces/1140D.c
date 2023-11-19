#include<stdio.h>
int main(){
    long long n,i,sum=0;
    scanf("%lld",&n);
    for(i=2;i<n;i++) sum+=i*(i+1);
    printf("%lld\n",sum);
}