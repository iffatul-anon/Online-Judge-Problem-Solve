#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b;
        scanf("%lld %lld",&a,&b);
        if(llabs(a-b)<=1) printf("Ok\n");
        else printf("%lld %lld\n",(a+b)/2,(a+b)-((a+b)/2));
    }
}