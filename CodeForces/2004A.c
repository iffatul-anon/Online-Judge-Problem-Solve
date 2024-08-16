#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n;
        scanf("%lld",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
        }
        if(n==1 || (n==2 && a[1]-a[0]>1)) printf("YES\n");
        else printf("NO\n");
    }
}