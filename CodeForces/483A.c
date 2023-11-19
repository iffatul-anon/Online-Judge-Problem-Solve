#include<stdio.h>
int main(){
    long long l,r;
    scanf("%lld %lld",&l,&r);
    if(r-l>=2 && l%2==0) printf("%lld %lld %lld\n",l,l+1,l+2);
    else if(r-l>2) printf("%lld %lld %lld\n",l+1,l+2,l+3);
    else printf("-1\n");
}