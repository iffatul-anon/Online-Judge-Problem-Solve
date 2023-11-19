#include<stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,m,sum1=0,sum2=0,a;
        scanf("%lld %lld",&n,&m);
        for(int i=0;i<n;i++){
            scanf("%lld",&a);
            sum1=sum1+a;
        }
        for(int i=0;i<m;i++){
            scanf("%lld",&a);
            sum2=sum2+a;
        }
        if(sum1>sum2) printf("Tsondu\n");
        else if(sum1<sum2) printf("Tenzing\n");
        else printf("Draw\n");
    }
}