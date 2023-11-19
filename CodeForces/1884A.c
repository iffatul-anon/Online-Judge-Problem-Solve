#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long x,k,y,sum=0;
        scanf("%lld %lld",&x,&k);
        y=x;
        while(y>0){
            sum+=y%10;
            y/=10;
        }
        while(sum%k!=0){
            x++;
            y=x;
            sum=0;
            while(y>0){
                sum+=y%10;
                y/=10;
            }
        }
        printf("%lld\n",x);
    }
}