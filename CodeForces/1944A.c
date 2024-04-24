#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,k;
        scanf("%lld %lld",&n,&k);
        if(k>=n-1) printf("1\n");
        else printf("%lld\n",n);
    }
}