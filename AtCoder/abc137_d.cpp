#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#define int long long
using namespace std;
signed main(){
    int n,m,sum=0;
    scanf("%lld %lld",&n,&m);
    vector<pair<int,int> > v(n);
    for(int i=0;i<n;i++) scanf("%lld %lld",&v[i].second,&v[i].first);
    set<int>s;
    for(int i=1;i<=m;i++) s.insert(i);
    sort(v.begin(),v.end());
    for(int i=n-1;i>=0;i--){
        if(s.lower_bound(v[i].second)!=s.end()){
            sum+=v[i].first;
            s.erase(s.lower_bound(v[i].second));
        }
    }
    printf("%lld\n",sum);
}