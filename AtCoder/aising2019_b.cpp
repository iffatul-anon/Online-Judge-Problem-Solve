#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n,a,b,c1=0,c2=0,c3=0,x,mn;
    scanf("%lld %lld %lld",&n,&a,&b);
    for(int i=0;i<n;i++){
        scanf("%lld",&x);
        if(x<=a) c1++;
        else if(x>b) c3++;
        else c2++;
    }
    mn=c1;
    if(c2<mn) mn=c2;
    if(c3<mn) mn=c3;
    printf("%lld\n",mn);
}
