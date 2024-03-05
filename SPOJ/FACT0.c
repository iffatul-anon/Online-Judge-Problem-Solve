#include<stdio.h>
long long a[100000005]={0}, p[100000005],ind=0;
void sieve(){
    p[ind++]=2;
    for(long long i=3;i<=100000005;i+=2){
        if(a[i]==0){
            p[ind++]=i;
            if(i*i>100000005) continue;
            for(long long j=i*i;j<=100000005;j+=2*i){
                a[j]=1;
            }
        }
    }
}
int main(){
    sieve();
    while(1){
        long long n,c,j;
        scanf("%lld",&n);
        if(n==0) return 0;
        for(j=0;p[j]*p[j]<=n;j++){
            c=0;
            while(n%p[j]==0){
                c++;
                n/=p[j];
            }
            if(c>0) printf("%lld^%lld ",p[j],c);
        }
        if(n>1) printf("%lld^1",n);
        printf("\n");
    }
}