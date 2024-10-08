#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,x,y,mx=0,mn=1000000000000,f=0;
        scanf("%lld",&n);
        int a[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        for(int i=1;i<n;i++){
            //if(a[i-1]<=a[i]) continue;
            if(a[i-1]>a[i] && i+1<n && a[i]<a[i+1]){
                x=a[i-1]-a[i];
                y=a[i+1]-a[i];
                if(x>mx) mx=x;
                if(y<mn) mn=y;
                i++;
            }
            else if(i==n-1 && a[i-1]>a[i]){
                x=a[i-1]-a[i];
                if(x>mx) mx=x;
            }
            else if(a[i-1]>a[i] && i+1<n && a[i]>=a[i+1]){
                f=1;
                break;
            }
            //else
            //printf("%lld %lld %lld %lld\n",i,mx,mn,f);
        }
        if(f==1 || mx>mn) printf("No\n");
        else printf("Yes\n");
    }
}

