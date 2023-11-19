#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;
int main(){
    long long n,k,t,b,sum=0,max=0;
    scanf("%lld %lld",&n,&k);
    vector<pair<long long,long long> >v;
    set<pair<long long,long long> >s;
    for(int i=0;i<n;i++){
        scanf("%lld %lld",&t,&b);
        v.push_back(make_pair(b,t));
    }
    sort(v.begin(),v.end());
    for(int i=n-1;i>=0;i--){
        sum+=v[i].second;
        s.insert(make_pair(v[i].second,i));
        if(s.size()>k){
            set<pair<long long,long long> >:: iterator it=s.begin();
            sum-=it->first;
            s.erase(it);
        }
        if(max<sum*v[i].first) max=sum*v[i].first;
    }
    printf("%lld\n",max);
}