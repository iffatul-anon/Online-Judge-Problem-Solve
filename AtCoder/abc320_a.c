#include<stdio.h>
#include<math.h>
int main(){
    long long a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld\n",(long long)pow(a,b)+(long long)pow(b,a));
}