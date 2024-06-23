#include<iostream>
#include<algorithm>
#include<map>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,sum=0,sum2=0,c=0;
        scanf("%lld",&n);
        int a[n];
        map<int,int>mp;
        for(int i=0;i<n;i++) {
            scanf("%lld",&a[i]);
            sum+=a[i];
            mp[a[i]]++;
            if(sum%2==0 && mp[sum/2]) c++;
        }
        printf("%lld\n",c);
    }
}