#include<stdio.h>
long long GCD(long long n1, long long n2) {
    if (n2 != 0) return GCD(n2, n1 % n2);
    else return n1;
}
long long LCM(long long n1, long long n2){
    return (n1*n2)/GCD(n1,n2);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,x,y,a,b,c;
        scanf("%lld %lld %lld",&n,&x,&y);
        a=n/x;
        b=n/y;
        c=n/LCM(x,y);
        a=a-c;
        b=b-c;
        a=(n*(n+1))/2-((n-a)*(n-a+1))/2;
        b=(b*(b+1))/2;
        printf("%lld\n",a-b);
    }
}