#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        long long n,l=1L,r,x,sum=0;
        scanf("%lld",&n);
        while(l<=n){
            x=n/l;
            r=n/x;
            sum+=(x*(((r*(r+1L))/2L)-((l*(l-1L))/2L)));
            l=r+1L;
        }
        //printf("%lld-%lld\n",sum,(n*(n+1))/2);
        sum=sum+1L-n-((n*(n+1L))/2L);
        printf("Case %d: %lld\n",i,sum);
    }
}