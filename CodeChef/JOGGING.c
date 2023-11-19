#include<stdio.h>
#define m 1000000007
int main(){
    int t;
    scanf("%d",&t);
    long long a[1000001],z=1,i;
    a[1]=1;
    for(i=2;i<=1000000;i++) {
        z=(z*2)%m;
        a[i]=z;
    }
    while(t--){
        long long n,x;
        scanf("%lld %lld",&n,&x);
        printf("%lld\n",(x*a[n])%m);
    }
}