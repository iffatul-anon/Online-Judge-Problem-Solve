#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int l,r,x=0;
        scanf("%lld %lld",&l,&r);
        if(l%2==0) l++;
        if(r%2==0) r--;
        x=r-l+1;
        if(x%4==3) x=(x/4)+1;
        else x=x/4;
        printf("%lld\n",x);
    }
}