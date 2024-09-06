#include<stdio.h>
#include<string.h>
#define int long long
signed main(){
    int a,b,c=2;
    scanf("%lld %lld",&a,&b);
    if(a>b){
        int tem=a;
        a=b;
        b=tem;
    }
    if((b-a)%2==0) c++;
    if(a==b) c=1;
    printf("%lld\n",c);
}