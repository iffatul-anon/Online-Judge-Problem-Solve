#include<stdio.h>
#include<math.h>
int main(){
    long long a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    if(b*log10(a)>d*log10(c)) printf("YES\n");
    else printf("NO\n");
}