#include<stdio.h>
int main(){
    long long n,sum=2,x=2;
    scanf("%lld",&n);
    for(int i=1;i<n;i++) {
        x*=2;
        sum+=x;
    }
    printf("%lld\n",sum);
}