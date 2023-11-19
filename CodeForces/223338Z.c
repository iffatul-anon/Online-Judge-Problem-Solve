#include<stdio.h>
int main(){
    long long r,s;
    scanf("%lld %lld",&r,&s);
    if(s>=2*r) printf("Square\n");
    else if(2*s*s<=4*r*r) printf("Circle\n");
    else printf("Complex\n");
}