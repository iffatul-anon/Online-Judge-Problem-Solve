#include<stdio.h>
int main(){
    long long n,a[100010],max;
    a[0]=0;
    a[1]=1;
    for(int i=1;i<=50000;i++) {
        a[2*i]=a[i];
        a[2*i+1]=a[i]+a[i+1];
    }
    while(1){
        scanf("%lld",&n);
        if(n==0) break;
        max=0;
        for(int i=0;i<=n;i++) if(a[i]>max) max=a[i];
        printf("%lld\n",max);
    }
}