#include<iostream>
#include<algorithm>
#include<vector>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n;
        scanf("%lld",&n);
        int a[]={0,9,9,909,909,90909,90909,9090909,9090909,909090909,909090909,90909090909,90909090909,9090909090909,9090909090909,909090909090909,909090909090909,90909090909090909,90909090909090909};
        string s=to_string(n);
        int l=s.size();
        int ans=a[l-1];
        if(l%2){
            int x=1;
            for(int i=1;i<l;i++) x*=10;
            ans+=n-x+1;
        }
        printf("%lld\n",ans);
    }
}