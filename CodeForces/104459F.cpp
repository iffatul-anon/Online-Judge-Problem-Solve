#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int k;
        scanf("%lld",&k);
        char s[k+1];
        scanf("%s",s);
        int n,m,x,y;
        scanf("%lld %lld",&n,&m);
        for(int i=0;i<m;i++) scanf("%lld %lld",&x,&y);
        x=m-n+1;
        if(x<0) x=0;
        if(s[x%k]=='1') printf("2\n");
        else printf("1\n");
    }
}
