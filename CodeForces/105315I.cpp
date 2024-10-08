#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[1000010];
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,k,sum=0,mod=1e9+7;
        scanf("%lld %lld",&n,&k);
        a[n]=1;
        sum=1;
        for(int i=n-1;i>=0;i--){
            a[i]=sum;
            sum=(sum+a[i])%mod;
            if(i+k<=n) sum=((sum%mod)-(a[i+k]%mod)+mod)%mod;
        }
        printf("%lld\n",a[0]);
    }
}



