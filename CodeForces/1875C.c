#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,m,z=0,f=0,c=29;
        scanf("%lld %lld",&n,&m);
        n=n%m;
        while(n && c--){
            z+=n;
            n=n*2;
            n=n%m;
        }
        if(c==-1) printf("-1\n");
        else printf("%lld\n",z);
    }
}