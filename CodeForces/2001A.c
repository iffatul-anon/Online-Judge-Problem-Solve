#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,max=0;
        scanf("%lld",&n);
        int a[n],b[1000]={0};
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
            b[a[i]]++;
        }
        for(int i=0;i<1000;i++) if(b[i]>max) max=b[i];
        printf("%lld\n",n-max);
    }
}