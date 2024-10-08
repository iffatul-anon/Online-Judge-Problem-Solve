#include<iostream>
#include<algorithm>
#include<vector>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,m,q,d,x,y,mn;
        scanf("%lld %lld %lld",&n,&m,&q);
        int a[m];
        for(int i=0;i<m;i++) scanf("%lld",&a[i]);
        sort(a,a+m);
        while(q--){
            mn=n;
            scanf("%lld",&d);
            if(a[0]<d && d<a[1]) x=(a[1]-a[0])/2;
            else if(d<a[0]) x=a[0]-1;
            else x=n-a[1];
            printf("%lld\n",x);
        }
        
    }
}