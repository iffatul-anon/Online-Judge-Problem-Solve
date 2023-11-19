#include<stdio.h>
const int mod = 1e9 + 7;
int power(int a, int b) {
	int x = 1;
	while (b) {
		if (b & 1) x = 1LL * x * a % mod;
		a = 1LL * a * a % mod;
		b >>= 1;
	} 
    return x;
}
int main(){
    long long f[100010];
    f[0]=1;
    for(long long i=1;i<100010;i++) f[i]=(f[i-1]*i)%(mod-1);
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,a,b;
        scanf("%lld %lld %lld",&a,&b,&n);
        if(a<b) n=power(n,f[a]);
        else n=power(n,f[b]);
        printf("%lld\n",n);
    }
}           