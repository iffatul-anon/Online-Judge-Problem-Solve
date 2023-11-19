#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,x,min1=10000000000,min2=10000000000,sum1=0,sum2=0;
        scanf("%lld",&n);
        for(int i=0;i<n;i++){
            scanf("%lld",&x);
            if(x<min1) min1=x;
            sum1+=x;
        }
        for(int i=0;i<n;i++){
            scanf("%lld",&x);
            if(x<min2) min2=x;
            sum2+=x;
        }
        if(sum2+(min1*n)<sum1+(min2*n)) printf("%lld\n",sum2+(min1*n));
        else printf("%lld\n",sum1+(min2*n));
    }
}