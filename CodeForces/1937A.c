#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,x=1;
        scanf("%lld",&n);
        while(x<=n) x*=2;
        x/=2;
        printf("%lld\n",x);
    }
}