#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n,a,b,sum=0;
    scanf("%lld",&n);
    for(int i=0;i<n;i++){
        scanf("%lld %lld",&a,&b);
        sum+=a*b;
    }
    printf("%lld\n",sum);
}
