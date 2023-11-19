#include<stdio.h>
int main(){
    long long n,l1,l2,l;
    scanf("%lld",&n);
    if(n==1) printf("1\n");
    else{
        l1=2;
        l2=1;
        for(int i=2;i<=n;i++) {
            l=l1+l2;
            l1=l2;
            l2=l;
        }
        printf("%lld\n",l);
    }
}