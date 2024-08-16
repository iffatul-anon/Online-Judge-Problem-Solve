#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int xc,yc,k,x,y,f=1;
        scanf("%lld %lld %lld",&xc,&yc,&k);
        x=(xc*k);
        y=(yc*k);
        if(k%2){
            printf("%lld %lld\n",x,y);
            for(int i=1;i<=k/2;i++){
                printf("%lld %lld\n",i,i);
                printf("%lld %lld\n",-i,-i);
            }
        }
        else{
            if(x==0 && y==0) {
                printf("%lld %lld\n",k,k);
                printf("%lld %lld\n",-k,-k);
            }
            else {
                printf("%lld 0\n",x);
                printf("0 %lld\n",y);
            }
            for(int i=2;i<=k/2;i++){
                printf("%lld %lld\n",i,i);
                printf("%lld %lld\n",-i,-i);
            }
        }
    }
}