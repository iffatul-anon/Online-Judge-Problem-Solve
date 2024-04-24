#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,k,x=1;
        scanf("%lld %lld",&n,&k);
        if(n==1) printf("%lld\n",k);
        else{
            for(long long i=1;i<31;i++){
                if(x*2>k) break;
                x*=2;
            }
            for(int i=2;i<n;i++) printf("0 ");
            printf("%lld %lld\n",x-1,k-x+1);
        }
    }   
}