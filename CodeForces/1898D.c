#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,x=0,y=10000000000,sum=0,tem;
        scanf("%lld",&n);
        long long a[n],b[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        for(int i=0;i<n;i++) {
            scanf("%lld",&b[i]);
            if(a[i]>b[i]){
                tem=a[i];
                a[i]=b[i];
                b[i]=tem;
            }
            sum+=b[i]-a[i];
            if(a[i]>x) x=a[i];
            if(b[i]<y) y=b[i];
        }
        tem=x-y;
        if(tem>0) sum+=tem+tem;
        printf("%lld\n",sum);
    }
}