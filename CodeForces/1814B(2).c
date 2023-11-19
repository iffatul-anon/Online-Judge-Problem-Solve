#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b,x=10000000000;
        scanf("%lld %lld",&a,&b);
        for(int i=1;i<100000;i++) if(x>(a+i-1)/i+(b+i-1)/i+i-1) x=(a+i-1)/i+(b+i-1)/i+i-1;
        printf("%lld\n",x);
    }
}