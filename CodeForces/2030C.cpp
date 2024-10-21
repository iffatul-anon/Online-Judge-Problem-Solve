#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define int long long
signed main(){
    int t;
    scanf("%lld", &t);
    while (t--){
        int n,f=0,c0=0,c1=0;
        scanf("%lld", &n);
        string s;
        cin>>s;
        for(int i=0;i<n-1;i++) if(s[i]=='1' && s[i+1]=='1') f=1;
        if(s[0]=='1' || s[n-1]=='1') f=1;
        if(f) printf("YES\n");
        else printf("NO\n");
    }
}