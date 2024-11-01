#include<stdio.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,m,r,c;
        scanf("%lld %lld %lld %lld",&n,&m,&r,&c);
        int sum=((n-r)*(m+m-1))+(m-c);
        printf("%lld\n",sum);

    }
}
