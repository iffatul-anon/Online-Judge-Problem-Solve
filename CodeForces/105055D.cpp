#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n,m;
    scanf("%lld %lld",&n,&m);
    int a=n/m;
    int b=n%m;
    if(a%2==1) printf("JOAOZAO\n");
    else printf("MARCEL\n");
}
