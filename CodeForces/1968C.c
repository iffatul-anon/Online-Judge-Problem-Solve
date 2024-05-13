#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,i;
        scanf("%lld",&n);
        long long x[n],a[n];
        for(int i=1;i<n;i++) scanf("%lld",&x[i]);
        a[0]=x[1]+1;
        for(int i=1;i<n;i++) {
            if(a[i-1]>x[i]) a[i]=a[i-1]+x[i];
            else{
                a[i]=x[i];
                a[i-1]+=((((x[i]-a[i-1])/a[i-2])+1)*a[i-2]);
            }
        }
        for(int i=0;i<n;i++) printf("%lld ",a[i]);
        printf("\n");
    }
}