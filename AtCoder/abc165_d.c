#include<stdio.h>
#include<math.h>
int main(){
    long long int a,b,n,x;
    scanf("%lld %lld %lld",&a,&b,&n);
    if(b>n){
        x=n;
    }
    else{
        x=b-1;
    }
    printf("%0.0f\n",floor((a*x)/b));
    return 0;
}