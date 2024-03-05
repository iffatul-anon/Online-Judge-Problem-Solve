#include<stdio.h>
long long GCD(long long n1, long long n2) {
    return n2==0 ? n1 : GCD(n2,n1%n2);
}
int main(){
    while(1){
        long long n,g=0;
        scanf("%lld",&n);
        if(n==0) return 0;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                g+=GCD(i,j);
            }
        }
        printf("%lld\n",g);
    }
}