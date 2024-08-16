#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,f=1;
        scanf("%lld",&n);
        int a[300000]={0},x;
        for(int i=0;i<n;i++){
            scanf("%lld",&x);
            a[x]=1;
            if(i>0 && ((x==1 && a[x+1]==0) || (x==n && a[x-1]==0) || (a[x-1]==0 && a[x+1]==0))) f=0;
        }
        if(f) printf("YES\n");
        else printf("NO\n");
    }
}