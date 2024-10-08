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
            if(d<a[0]) x=a[0]-1;
            else if(a[m-1]<d) x=n-a[m-1];
            else{
                y=upper_bound(a,a+m,d)-a;
                x=(a[y]-a[y-1])/2;
            }
            printf("%lld\n",x);
        }
        
    }
}