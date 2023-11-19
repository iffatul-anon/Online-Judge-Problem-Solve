#include<stdio.h>
int main(){
    long long n,d,x,y;
    scanf("%lld %lld",&n,&d);
    for(int i=0;i<n;i++){
        scanf("%lld",&x);
        if(i==0 || x-y>=d) {
            printf("%lld\n",x);
            y=x;
        }
    }
}