#include<stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,sum=0;
        scanf("%lld\n",&n);
        while(n>0){
            sum+=n;
            n=n/2;
        }
        printf("%lld\n",sum);
    }
}