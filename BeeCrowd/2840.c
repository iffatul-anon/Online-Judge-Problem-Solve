#include<stdio.h>
int main(){
    long long int r,l;
    scanf("%lld %lld",&r,&l);
    double x=(3.1415*r*r*r*4)/3;
    printf("%lld\n",(long long int)(l/x));
    return 0;
}