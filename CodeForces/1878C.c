#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,k,x,sum1=0,sum2=0;
        scanf("%lld %lld %lld",&n,&k,&x);
        sum1=(k*(k+1))/2;
        sum2=(n*(n+1))/2-((n-k)*(n-k+1))/2;
        if(sum1>x || sum2<x) printf("NO\n");
        else printf("YES\n");
    }
}