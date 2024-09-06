#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int a,b;
        scanf("%lld %lld",&a,&b);
        printf("%lld\n",b-a);
    }
}