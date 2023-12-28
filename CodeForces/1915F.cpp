#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,sum=0;
        scanf("%lld",&n);
        vector<pair<long long,long long> > v(n);
        vector<long long> v2(n);
        for(int i=0;i<n;i++) {
            scanf("%lld %lld",&v[i].first,&v[i].second);
            v2[i]=v[i].second;
        }
        sort(v.begin(),v.end());
        sort(v2.begin(),v2.end());
        for(int i=0;i<n;i++){
            sum+=upper_bound(v2.begin(),v2.end(),v[i].second)-v2.begin()-1;
            v2.erase(lower_bound(v2.begin(),v2.end(),v[i].second));
        }
        printf("%lld\n",sum);
    }
}
