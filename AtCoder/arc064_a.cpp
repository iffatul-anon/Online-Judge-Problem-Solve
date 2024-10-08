#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n,x,sum=0,y,z;
    scanf("%lld %lld",&n,&x);
    int a[n];
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    for(int i=0;i<n-1;i++) {
        if(a[i]>x){
            sum+=(a[i]-x);
            a[i]=x;
        }
        if(a[i]+a[i+1]>x){
            sum+=(a[i]+a[i+1]-x);
            y=(a[i]+a[i+1]-x);
            a[i+1]-=y;
        }
    }
    printf("%lld\n",sum);
}
