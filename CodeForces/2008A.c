#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int a,b;
        scanf("%lld %lld",&a,&b);
        b=b%2;
        if(a%2==1) printf("NO\n");
        else if(b%2==1 && a<2) printf("NO\n");
        else printf("YES\n");
    }
}