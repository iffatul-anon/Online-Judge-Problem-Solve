#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    while(t--){
        int n,f=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++) if(a[i]+a[i]>a[i+1] && a[i]+a[i+1]>a[i] && a[i+1]+a[i+1]>a[i] && a[i]+a[i+1]>a[i+1]) f=1;
        if(f) printf("YES\n");
        else printf("NO\n");
    }
}