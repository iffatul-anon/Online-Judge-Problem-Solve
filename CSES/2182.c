#include<stdio.h>
#include<math.h>
#define M 1000000007
//
long long expo(long long base,long long pow) {
	long long ans = 1;
	while (pow) {
		if (pow & 1) ans = ans * base % M;
		base = base * base % M;
		pow >>= 1;
	}
	return ans;
}
//
int main(){
    long long n,x,k,number=1,sum=1,product=1,anon,anon2,anon3=1,number2=1;
    scanf("%lld",&n);
    while(n--){
        long long x,k;
        scanf("%lld %lld",&x,&k);
        number=(number*(k+1))%M;
        // anon=1;
        // for(int i=0;i<=k;i++) anon=(anon*x)%M;
        // anon3=(anon3*(anon/x))%M;
        // anon=(anon-1)/(x-1);
        // sum=(sum*anon)%M;
        //
        sum=(((sum*(expo(x,k+1)-1))%M)*expo(x-1,M-2))%M;
        product=(expo(product,k+1)*expo(expo(x,(k*(k+1))/2),number2))%M;
        number2=(number2*(k+1))%(M-1);
        //
    }
    // for(int i=1;i<=number/2;i++) product=(product*anon3)%M;
    // anon3=sqrt(anon3);
    // if(number%2) product=(product*anon3)%M;
    printf("%lld %lld %lld\n",number,sum,product);
}