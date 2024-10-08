#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n,m,x,y,mx=0;
    scanf("%lld %lld",&n,&m);
    int a[m+2];
    a[0]=0;
    a[m+1]=n;
    for(int i=1;i<=m;i++) scanf("%lld",&a[i]);
    for(int i=1;i<=m;i++){
        x=a[i]-a[i-1];
        y=a[i+1]-a[i];
        if(x%2) x=(x/2)+1;
        else x=x/2;
        if(y%2) y=(y/2)+1;
        else y=y/2;
        if(x>mx) mx=x;
        if(y>mx) mx=y;
    }
    x=a[1];
    y=n-a[m];
    if(x>mx) mx=x;
    if(y>mx) mx=y;
    if(y>mx) mx=y;
    printf("%lld\n",mx);
}
