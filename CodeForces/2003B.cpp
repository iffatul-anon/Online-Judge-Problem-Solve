#include<iostream>
#include<algorithm>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n;
        scanf("%lld",&n);
        int a[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        sort(a,a+n);
        printf("%lld\n",a[n/2]);
    }
}