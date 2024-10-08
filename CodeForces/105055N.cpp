#include<bits/stdc++.h>
#define int long long
long long GCD(long long n1, long long n2) {
    return n2==0 ? n1 : GCD(n2,n1%n2);
}
using namespace std;
signed main(){
    int a,b,k;
    scanf("%lld %lld %lld",&a,&b,&k);
    if(a<=k || b<=k || GCD(a,b)<=k) printf("S\n");
    else printf("N\n");
}
