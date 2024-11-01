#include<stdio.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int x,y,k;
        scanf("%lld %lld %lld",&x,&y,&k);
        if(x<y) {
            printf("0 0 %lld %lld\n",x,x);
            printf("0 %lld %lld 0\n",x,x);
        }
        else {
            printf("0 0 %lld %lld\n",y,y);
            printf("0 %lld %lld 0\n",y,y);
        }
    }
}
