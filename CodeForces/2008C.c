#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int l,r,x,y,i=1;
        scanf("%lld %lld",&l,&r);
        x=r-l;
        while(1) {
            y=(i*(i+1))/2;
            if(x<y) break;
            i++;
        }
        printf("%lld\n",i);
    }
}