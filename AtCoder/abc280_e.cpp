#include <bits/stdc++.h>
using namespace std;


const int N = 2e5+10;
int MOD = 998244353;
int dp[N];
long long x,y;
long long modInverse(long long base) {
    long long ans = 1,pow = MOD - 2;
    while (pow) {
        if (pow & 1) ans = (ans * base) % MOD;
        base = (base * base) % MOD;
        pow >>= 1;
    }
    return ans;
}

int ok(int n){
    if(n<=0) return 0;
    if(dp[n]) return dp[n];
    
    long long sum = (x*(1+ok(n-2)))%MOD;
    sum+=(y*(1+ok(n-1)))%MOD;
    
    return dp[n]=sum%MOD;
}


int main() {
    int n,p;
	cin>>n>>p;
	x=(p*modInverse(100))%MOD;
	y=(1-x+MOD)%MOD;
	
	cout<<ok(n)<<'\n';
}
