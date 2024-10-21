#include <iostream>
#include <algorithm>
using namespace std;
#define int long long
signed main(){
    int t;
    scanf("%lld", &t);
    while (t--){
        int n,sum=0;
        scanf("%lld", &n);
        int a[n];
        for(int i=0; i<n; i++) scanf("%lld", &a[i]);
        sort(a, a+n);
        for(int i=1;i<n;i++) sum+=a[n-1]-a[0];
        printf("%lld\n", sum);
    }
}