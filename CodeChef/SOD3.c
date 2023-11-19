#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long l,r;
        scanf("%lld %lld",&l,&r);
        printf("%lld\n",(r/3)-((l-1)/3));
    }
}