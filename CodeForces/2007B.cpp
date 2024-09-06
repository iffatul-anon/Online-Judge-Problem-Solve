#include<iostream>
#include<algorithm>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,m,l,r,mx=0;
        scanf("%lld %lld",&n,&m);
        int a[n];
        char s[2];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        sort(a,a+n);
        mx=a[n-1];
        while(m--){
            scanf("%s %lld %lld",s,&l,&r);
            if(s[0]=='+' && l<=mx && r>=mx) mx++;
            else if(s[0]=='-' && l<=mx && r>=mx) mx--;
            printf("%lld ",mx);
        }
        printf("\n");
    }
}