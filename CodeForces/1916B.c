#include<stdio.h>
long long GCD(long long n1, long long n2) {
    return n2==0 ? n1 : GCD(n2,n1%n2);
}
long long LCM(long long n1, long long n2){
    return (n1*n2)/GCD(n1,n2);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b;
        scanf("%lld %lld",&a,&b);
        if(b%a==0) printf("%lld\n",b*(b/a));
        else printf("%lld\n",LCM(a,b));
    }
}