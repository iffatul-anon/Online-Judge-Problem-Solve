#include<stdio.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,ans=0;
        scanf("%lld",&n);
        int a[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        ans=a[n-1];
        for(int i=n-2;i>=0;i--){
            if(a[i]<=ans) ans++;
            else ans=a[i];
        }
        printf("%lld\n",ans);
    }
}