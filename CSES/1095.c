#include<stdio.h>
#include<math.h>
#define M 1000000007
long long expo(long long base,long long pow) {
	long long ans = 1;
	while (pow) {
		if (pow & 1) ans = ans * base % M;
		base = base * base % M;
		pow >>= 1;
	}
	return ans;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d\n",expo(a,b));
    }
}