#include<stdio.h>
#include<math.h>
int main(){
    long long int n,k,x,y;
    scanf("%lld",&n);
    while(n--){
        scanf("%lld",&k);
        x=8*k-7;
        y=sqrt(x);
        if(x==y*y){
            printf("1 ");
        }
        else{
            printf("0 ");
        }
    }
}