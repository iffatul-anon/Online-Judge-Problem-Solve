#include<stdio.h>
int main(){
    long long n,sum=0;
    scanf("%lld",&n);
    long long a[n];
    for(int i=0;i<n;i++) {
        scanf("%lld",&a[i]);
        sum+=a[i];
    }
    if(sum%5==0) sum=sum/5;
    else sum=(sum/5)+1;
    printf("%lld\n",sum);
}