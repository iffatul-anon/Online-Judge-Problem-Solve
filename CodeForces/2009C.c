#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int x,y,k,a,b;
        scanf("%lld %lld %lld",&x,&y,&k);
        a=x/k;
        b=y/k;
        if(x%k!=0) a++;
        if(y%k!=0) b++;
        if(a>b) printf("%lld\n",(a*2)-1);
        else printf("%lld\n",b*2);
    }
}