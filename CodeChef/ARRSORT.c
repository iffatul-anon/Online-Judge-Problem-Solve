#include <stdio.h>
#include<stdlib.h>
long long GCD(long long n1, long long n2) {
    if (n2 != 0) return GCD(n2, n1 % n2);
    else return n1;
}
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,x,gcd=0;
	    scanf("%d",&n);
	    for(int i=1;i<=n;i++){
	        scanf("%d",&x);
	        if(x==i) continue;
	        if(gcd==0) gcd=abs(x-i);
	        else gcd=GCD(gcd,abs(x-i));
	    }
	    printf("%d\n",gcd);
	}
}

