#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        long long int n,m;
        scanf("%lld %lld",&n,&m);
        long long int sum=0;
        printf("Case %d: %lld\n",i,m*(n/2));
    }
    return 0;
}