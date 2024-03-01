#include<stdio.h>
#include<math.h>
#define M 1000000007
#define M2 1000000006
long long expo2(long long base,long long pow) {
	long long ans = 1;
	while (pow) {
		if (pow & 1) ans = ans * base % M2;
		base = base * base % M2;
		pow >>= 1;
	}
	return ans;
}
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
        long long a,b,c,x,y,z;
        scanf("%lld %lld %lld",&a,&b,&c);
        if(b==0 && c==0) y=1;
        else y=expo2(b,c);
        if(a==0 && y==0) x=1;
        else x=expo(a,y);
        printf("%lld\n",x);
        //printf("%lld\n",expo(a,expo(b,c)));
    }
}