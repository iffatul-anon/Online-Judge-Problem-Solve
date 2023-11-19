#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,k;
        scanf("%lld %lld",&n,&k);
        k > 30 ? k=30 : 0;
        n+1 < 1<<k ? printf("%lld\n",n+1) : printf("%lld\n",(long long)1<<k);
    }
}