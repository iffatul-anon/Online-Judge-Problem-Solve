#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long m,k,a1,ak,x,y;
        scanf("%lld %lld %lld %lld",&m,&k,&a1,&ak);
        x=m/k;
        if(a1==0 && ak==0) printf("%lld\n",m/k+m%k);
        else if(m<=a1 || (ak>=x && m%k<=a1) || (ak<x && ak*k+a1>=m)) printf("0\n");
        else if(ak>=x) printf("%lld\n",(m%k)-a1);
        else{
            x=x-ak;
            y=m%k;
            if(a1<=y) printf("%lld\n",x+y-a1);
            else{
                a1-=y;
                y=a1/k;
                printf("%lld\n",x-y);
            }
        }
    }
}