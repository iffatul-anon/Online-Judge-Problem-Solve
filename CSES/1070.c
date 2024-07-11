#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    if(t==1) printf("1\n");
    else if(t<4) printf("NO SOLUTION\n");
    else{
        for(int i=2;i<=t;i+=2) printf("%lld ",i);
        for(int i=1;i<=t;i+=2) printf("%lld ",i);
        printf("\n");
    }
}