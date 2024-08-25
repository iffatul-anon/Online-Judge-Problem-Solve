#include<stdio.h>
#define int long long
signed main(){
    int n,sum=0;
    scanf("%lld",&n);
    if(n%2) printf("0\n");
    else{
        for(int i=5;i<=n;i*=5) sum+=(n/i)/2;
        printf("%lld\n",sum);
    }
}