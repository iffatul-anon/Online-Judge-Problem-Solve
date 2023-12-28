#include <stdio.h>
long long gcd(long long a, long long b) {
	return b == 0 ? a : gcd(b, a % b);
}
long long lcm(long long a, long long b) {
	return a * (b / gcd(a, b));
}
int main() {
	long long n, k, x=1;
	scanf("%lld %lld", &n, &k);
	for (int i = 0; i < k; i++) x *= 10;
	printf("%lld\n", lcm(n, x));
}
