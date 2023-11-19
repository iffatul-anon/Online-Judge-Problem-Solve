#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,k,x;
        scanf("%lld %lld",&n,&k);
        if(n>k){
            x=n/k;
            if(n%k!=0) x++;
            k=k*x;
        } 
        if(k%n==0) printf("%lld\n",k/n);
        else printf("%lld\n",k/n+1);
    }
}