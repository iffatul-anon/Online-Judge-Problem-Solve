#include<stdio.h>
int main(){
    while(1){
        int n;
        scanf("%d",&n);
        if(n==0){
            return 0;
        }
        long long int x=0;
        for(int i=1;i<=n;i++){
            x=x+(i*i);
        }
        printf("%lld\n",x);
    }
}