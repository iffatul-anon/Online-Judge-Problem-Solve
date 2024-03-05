#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        long long n,l=1,r,x,sum=0;
        scanf("%lld",&n);
        while(l<=n){
            x=n/l;
            r=n/x;
            sum+=(x*(((r*(r+1))/2)-((l*(l-1))/2)));
            l=r+1;
        }
        sum=sum+1-n-((n*(n+1))/2);
        if(n==0) sum=0;
        printf("Case %d: %lld\n",i,sum);
    }
}