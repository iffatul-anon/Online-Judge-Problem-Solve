#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,x=1;
        scanf("%lld",&n);
        for(int i=0;i<n;i++){
            printf("%lld ",x);
            x=x+2;
        }
        printf("\n");
    }
}