#include<stdio.h>
#define MOD 1000000007
long long expo(long long base,long long pow) {
	long long ans = 1;
	while (pow) {
		if (pow & 1) ans = ans * base % MOD;
		base = base * base % MOD;
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