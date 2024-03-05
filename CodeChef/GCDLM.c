#include <stdio.h>
long long GCD(long long n1, long long n2) {
    return n2==0 ? n1 : GCD(n2,n1%n2);
}
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y,k,gcd;
	    scanf("%d %d %d",&x,&y,&k);
	    gcd=GCD(x,y);
	    if(x>y) x=gcd;
	    else y=gcd;
	    if(k==1) printf("%d\n",x+y);
	    else printf("%d\n",gcd+gcd);
	}
}

