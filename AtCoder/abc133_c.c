#include<stdio.h>
#define int long long
signed main(){
    int l,r,x=2019,x1,x2,y1,y2;
    scanf("%lld %lld",&l,&r);
    if(r-l>=2018) printf("0\n");
    else{
        for(int i=l;i<=r;i++){
            for(int j=i+1;j<=r;j++){
                if((i*j)%2019<x) x=(i*j)%2019;
            }
        }
        printf("%lld\n",x);
    }
}
