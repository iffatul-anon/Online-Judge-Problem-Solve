#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n;
        scanf("%lld",&n);
        long long int x=(-1+(sqrt(1+(8*n))))/2;
        printf("%lld\n",x);
    }
    return 0;
}