#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,i;
        scanf("%lld",&n);
        for(i=1;i<43;i++) if(n%i!=0) break;
        printf("%lld\n",i-1);
    }
}