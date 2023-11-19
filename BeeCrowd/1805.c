#include <stdio.h> 
int main  () {
    long long a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld\n",(b*(b+1))/2-(a*(a-1))/2);
}