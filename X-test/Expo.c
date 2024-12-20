#include<stdio.h>
#define MOD 1000000007
long long expo(long long base,long long pow,long long mod) {
	long long ans = 1;
	while (pow) {
		if (pow & 1) ans = ans * base % mod;
		base = base * base % mod;
		pow >>= 1;
	}
	return ans;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
    }
}