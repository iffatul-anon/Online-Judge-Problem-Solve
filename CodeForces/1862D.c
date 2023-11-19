#include<stdio.h>
#include<math.h>
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        long long n,x,y;
        scanf("%lld",&n);
        x=(sqrtl(1+(4*2*n))-1)/2;
        y=(x*(x+1))/2;
        printf("%lld\n",x+(n-y)+1);
    }
}