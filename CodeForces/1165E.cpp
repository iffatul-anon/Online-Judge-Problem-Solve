#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int MOD = 998244353;
int main(){
    long long n,i,x,sum=0;
    scanf("%lld",&n);
    vector<long long>a,b(n);
    for(i=0;i<n;i++) {
        scanf("%lld",&x);
        a.push_back((i+1)*(n-i)*x);
    }
    for(i=0;i<n;i++) scanf("%lld",&b[i]);
    sort(a.rbegin(),a.rend());
    sort(b.begin(),b.end());
    for(i=0;i<n;i++){
        sum=(sum+(((a[i]%MOD)*b[i])%MOD))%MOD;
    }
    printf("%lld\n",sum);
}