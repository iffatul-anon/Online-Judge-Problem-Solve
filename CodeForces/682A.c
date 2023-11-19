#include<stdio.h>
int main(){
    long long n,m,c1,c2,c3,c4,c5,cc1,cc2,cc3,cc4,cc5;
    scanf("%lld %lld",&n,&m);
    c1=c2=c3=c4=c5=n/5;
    if(n%5>0) c1++;
    if(n%5>1) c2++;
    if(n%5>2) c3++;
    if(n%5>3) c4++;
    cc1=cc2=cc3=cc4=cc5=m/5;
    if(m%5>0) cc1++;
    if(m%5>1) cc2++;
    if(m%5>2) cc3++;
    if(m%5>3) cc4++;
    printf("%lld\n",(c1*cc4)+(c2*cc3)+(c3*cc2)+(c4*cc1)+(c5*cc5));
}