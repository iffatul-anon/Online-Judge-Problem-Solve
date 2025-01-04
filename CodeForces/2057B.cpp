#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
#define int long long
signed main() {
    int t;
    scanf("%lld", &t);
    while(t--){
        int n,k,x=0,ans=1;
        scanf("%lld %lld", &n, &k);
        int a[n];
        map<int, int> mp;
        int b[n];
        for(int i=0;i<n;i++) {
            scanf("%lld", &a[i]);
            mp[a[i]]++;
        }
        map<int, int>::iterator it=mp.begin();
        while(it!=mp.end()){
            b[x++]=it->second;
            it++;
        }
        sort(b,b+x);
        for(int i=0;i<x;i++){
            if(k-b[i]<0){
                ans=x-i;
                break;
            }
            k-=b[i];
        }
        printf("%lld\n",ans);
    }
}