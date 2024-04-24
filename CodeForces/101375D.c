#include<stdio.h>
int main(){
    long long n,sum=0,sum2=0;
    scanf("%lld",&n);
    long long a[n];
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    sum2+=a[0];
    for(int i=1;i<n;i++) {
        sum+=a[i]*sum2;
        sum2+=a[i];
    }
    printf("%lld\n",sum);
}