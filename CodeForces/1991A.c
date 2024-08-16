#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,max=0,a;
        scanf("%lld",&n);
        for(int i=1;i<=n;i++){
            scanf("%lld",&a);
            if(a>max && i%2==1) max=a;
        }
        printf("%lld\n",max);
    }
}