#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,k,c=0;
        scanf("%lld %lld",&n,&k);
        while(n>1){
            c++;
            n=n-(k-1);
        }
        printf("%lld\n",c);
    }
}