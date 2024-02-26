#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,m;
        scanf("%lld %lld",&n,&m);
        printf("%lld\n",n*(m/2));
    }
}