#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,max=0,max2=0,max3=0,i,x,y;
        scanf("%lld",&n);
        x=n;
        while(x--){
            max3=0;
            max2=0;
            y=0;
            for(i=1;i<=x;i++){
                max2+=i*i;
                if(max3<i*i) max3=i*i;
            }
            for(i=i;i<=n;i++){
                max2+=i*(n-y);
                if(max3<i*(n-y)) max3=i*(n-y);
                y++;
            }
            max2-=max3;
            if(max<max2) max=max2;
        }
        printf("%lld\n",max);
    }
}