#include<stdio.h>
int main(){
    long long n,m;
    scanf("%lld %lld",&n,&m);
    while(n!=0 && m!=0){
        if(n>=2*m) n-=((n/m)/2)*2*m;
        else if(m>=2*n) m-=((m/n)/2)*2*n;
        else break;
    }
    printf("%lld %lld\n",n,m);
}