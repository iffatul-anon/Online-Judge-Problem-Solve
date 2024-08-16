#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
       int n,m,k,x,y;
       scanf("%lld %lld %lld",&n,&m,&k);
       if(n<k)x=n;
       else x=k;
       if(m<k) y=m;
       else y=k;
       printf("%lld\n",x*y);
    }
}