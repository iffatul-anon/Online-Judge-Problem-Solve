#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,k,x=0,max=0,min=10000000000;
        scanf("%lld %lld",&n,&k);
        int a[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        sort(a,a+n);
        for(int i=0;i<n;i++){
            x=a[n-1]-a[i]+1;
            if(x%(2*k)==0) x=2*k;
            else x=x%(2*k);
            if(x<=k && x>max) max=x;
            if(x>k && x-k<min) min=x-k;
        }
        if(max>=min) printf("-1\n");
        else if(min==10000000000) printf("%lld\n",a[n-1]);
        else printf("%lld\n",a[n-1]+k-min+1);
    }
}