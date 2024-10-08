#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,m;
        scanf("%lld %lld",&n,&m);
        if(m<=n) printf("NO\n");
        else {
            printf("YES\n");
            for(int i=0;i<n;i++) printf("1 ");
            printf("\n");
        }
    }
}
