#include<stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b,tem;
        scanf("%lld %lld",&a,&b);
        if(a>b){
            tem=a;
            a=b;
            b=tem;
        }
        if(a==b) printf("0 0\n");
        else if(a%(b-a)==0) printf("%lld 0\n",b-a);
        else if((b-a)-(a%(b-a))>(a%(b-a))) printf("%lld %lld\n",b-a,a%(b-a));
        else printf("%lld %lld\n",b-a,(b-a)-(a%(b-a)));
    }
}