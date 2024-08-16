#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n;
        scanf("%lld",&n);
        if(n%4==0) printf("%lld\n",n/4);
        else printf("%lld\n",(n/4)+1);
    }
}