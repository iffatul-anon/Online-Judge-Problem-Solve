#include<stdio.h>
#include<stdlib.h>
#define int long long
signed main() {
    int t;
    scanf("%lld", &t);
    while(t--){
        int n,a,b;
        scanf("%lld %lld %lld", &n, &a, &b);
        if(llabs(a-b)%2==1) printf("NO\n");
        else printf("YES\n");
    }
}