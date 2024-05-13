#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    long long x,y;
    scanf("%lld %lld",&x,&y);
    if(x<y) printf("%lld %lld\n",x,y);
    else printf("%lld %lld\n",y,x);
    }
} 