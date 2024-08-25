#include <stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int a,b,n;
        scanf("%lld %lld %lld",&a,&b,&n);
        if(n%2) a=a*2;
        if(a>b) printf("%lld\n",a/b);
        else printf("%lld\n",b/a);
    }
}


