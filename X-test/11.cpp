#include<iostream>
#include<map>
long long GCD(long long n1, long long n2) {
    return n2==0 ? n1 : GCD(n2,n1%n2);
}
long long LCM(long long n1, long long n2){
    return (n1*n2)/GCD(n1,n2);
}
using namespace std;
int main(){
    long long n,m,k,x,y,z,nm,i;
    scanf("%lld %lld %lld",&n,&m,&k);
    nm=LCM(n,m);
    x=(nm/n)+(nm/m)-2;
    y=k/x;
    if(k%x==0) y--;
    z=y*x;
    nm*=y;
    while(1){
        if((nm%n==0 && nm%m!=0) || (nm%n!=0 && nm%m==0)) z++;
        if(z==k) break;
        nm++;
    }
    printf("%lld\n",nm);  
}