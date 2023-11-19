#include <stdio.h>
#include<math.h>
int main() {
    int t;
    scanf("%d",&t);
    long long a[50];
    for(int i=0;i<=35;i++) a[i]=pow(2,i);
    while(t--){
        long long n,x,j;
        scanf("%lld",&n);
        printf("%lld\n",n);
        for(int i=1;i<=n;i++){
            scanf("%lld",&x);
            for(j=0;j<=35;j++) if(x<a[j]) break;
            printf("%d %lld\n",i,a[j]-x);
        }
    }
}