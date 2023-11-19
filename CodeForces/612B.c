#include<stdio.h>
#include<stdlib.h>
int main(){
    long long n,x,sum=0;
    scanf("%lld",&n);
    int a[n+1];
    for(int i=1;i<=n;i++){
        scanf("%lld",&x);
        a[x]=i;
    }
    for(int i=2;i<=n;i++) sum+=abs(a[i]-a[i-1]); 
    printf("%lld\n",sum);
}