#include <stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,x=1,a[35],c=0;
        scanf("%lld",&n);
        for(int i=0;i<31;i++) {
            a[i]=x;
            x=x*2;
        }
        for(int i=30;i>=0;i--){
            if(n>=a[i]){
                c++;
                n-=a[i];
            }
        }
        printf("%lld\n",c-1);
    }
}

