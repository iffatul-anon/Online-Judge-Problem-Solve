#include<stdio.h>
#define M 1000000007
int TWO_MOD_INV = 500000004;
int main(){
    long long n,l=1,r,x,y,sum=0;
    scanf("%lld",&n);
    while(l<=n){
        x=n/l;
        r=n/x;
        sum=(sum+x*((((r - l + 1) % M) * ((l + r) % M) % M) * TWO_MOD_INV % M))%M;
        //sum=(sum+x*((((r%M)*((r+1)%M))%M/2)%M-(((l%M)*((l-1)%M))%M)/2)%M)%M;
        l=r+1;
    }
    printf("%lld\n",sum);
}