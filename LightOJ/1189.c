#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    long long a[20],i;
    a[0]=1;
    for(i=1;i<20;i++) a[i]=a[i-1]*i;
    for(i=1;i<=t;i++){
        long long n,j=19,b[20],x=0;
        scanf("%lld",&n);
        while(j>=0){
            if(n>=a[j]) {
                n-=a[j];
                b[x++]=j;
            }
            j--;
        }
        if(n==0){
            printf("Case %lld: ",i);
            for(j=x-1;j>0;j--) printf("%lld!+",b[j]);
            printf("%lld!\n",b[0]);
        }
        else printf("Case %lld: impossible\n",i);
    }
}
