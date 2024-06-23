#include<iostream>
#include<algorithm>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,sum=0,f=0,c=100000000000;
        scanf("%lld",&n);
        int a[n],b[n+1];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        for(int i=0;i<=n;i++) scanf("%lld",&b[i]);
        for(int i=0;i<n;i++){
            sum+=labs(a[i]-b[i]);
            if((a[i]<=b[n] && b[i]>=b[n]) || (a[i]>=b[n] && b[i]<=b[n])) f=1;
        }
        if(f) printf("%lld\n",sum+1);
        else {
            for(int i=0;i<n;i++){
                if(labs(b[n]-a[i])<c) c=labs(b[n]-a[i]);
                if(labs(b[n]-b[i])<c) c=labs(b[n]-b[i]);
            }
            printf("%lld\n",sum+1+c);
        }
    }
}