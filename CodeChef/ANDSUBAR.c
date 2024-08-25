#include <stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,x=1,a[35],y,z;
        scanf("%lld",&n);
        for(int i=0;i<31;i++) {
            a[i]=x-1;
            x=x*2;
        }
        for(int i=30;i>=0;i--){
            if(n>a[i]){
                if(i>0){
                    if(n-a[i]>a[i]-a[i-1]) y=n-a[i];
                    else y=a[i]-a[i-1];
                }
                else y=n-a[i];
                break;
            }
            if(n==a[i]){
                if(i>0) y=a[i]-a[i-1];
                else y=1;
                break;
            }
        }
        printf("%lld\n",y);
    }
}


