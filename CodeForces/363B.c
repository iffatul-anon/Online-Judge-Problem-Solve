#include<stdio.h>
int main(){
    long long n,k,min=1000000000000,x;
    scanf("%lld %lld",&n,&k);
    long long a[n+1];
    a[0]=0;
    for(int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        a[i]+=a[i-1];
    }
    for(int i=k;i<=n;i++) {
        if(min>a[i]-a[i-k]) {
            min=a[i]-a[i-k];
            x=i-k+1;
        }
    }
    printf("%lld\n",x);
}