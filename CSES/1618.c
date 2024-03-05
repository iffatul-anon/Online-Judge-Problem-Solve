#include<stdio.h>
int main(){
    long long n,zero=0,x=5;
    scanf("%lld",&n);
    for(int i=1;i<13;i++) {
        zero+=n/x;
        x*=5;
    }
    printf("%lld\n",zero);
}