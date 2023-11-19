#include<stdio.h>
int main(){
    long long n,max=-1000000000,sum=0;
    scanf("%lld",&n);
    long long a[n];
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum>max) max=sum;
        if(sum<0) sum=0;
    }
    printf("%lld\n",max);
}
