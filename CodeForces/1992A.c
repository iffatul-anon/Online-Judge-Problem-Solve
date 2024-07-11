#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int a[3];
        scanf("%lld %lld %lld",&a[0],&a[1],&a[2]);
        for(int i=0;i<5;i++){
            if(a[0]<=a[1] && a[0]<=a[2]) a[0]++;
            else if(a[1]<=a[0] && a[1]<=a[2]) a[1]++;
            else a[2]++;
        }
        printf("%lld\n",a[0]*a[1]*a[2]);
    }
}
