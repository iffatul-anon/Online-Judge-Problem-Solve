#include<iostream>
#include<algorithm>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,f,k,x,y=0;
        scanf("%lld %lld %lld",&n,&f,&k);
        int a[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        x=a[f-1];
        sort(a,a+n);
        for(int i=0;i<n-k;i++) if(a[i]==x) y=1;
        if(y && a[n-k]==x) printf("MAYBE\n");
        else if(y) printf("NO\n");
        else printf("YES\n");
    }
}