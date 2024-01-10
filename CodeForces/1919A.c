#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b;
        scanf("%lld %lld",&a,&b);
        if((a+b)%2==1) printf("Alice\n");
        else printf("Bob\n");
    }
}