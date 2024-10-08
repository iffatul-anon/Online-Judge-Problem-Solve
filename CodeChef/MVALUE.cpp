#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int x,ans;
        scanf("%lld",&x);
        int b[x];
        for(int i=0;i<x;i++){
            scanf("%lld",&b[i]);
        }
        sort(b,b+x);
        ans=(b[x-1]*b[x-2])+max(b[x-1]-b[x-2],b[x-2]-b[x-1]);
        ans=max(ans,(b[0]*b[1])+max(b[0]-b[1],b[1]-b[0]));
        printf("%lld\n",ans);
    }
}
