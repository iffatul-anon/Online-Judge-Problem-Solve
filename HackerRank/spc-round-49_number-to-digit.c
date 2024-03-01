#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,f=1;
        scanf("%lld",&n);
        while(n%2==0) n/=2;
        for(int i=3;i<=7;i+=2) while(n%i==0) n/=i;
        if(n>9) f=0;
        if(f) printf("yes\n");
        else printf("no\n");
    }
} 