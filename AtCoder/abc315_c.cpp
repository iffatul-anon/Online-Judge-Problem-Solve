#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    long long n,max=0,sum=0,x;
    scanf("%lld",&n);
    vector<pair<long long,long long> >v(n);
    for(int i=0;i<n;i++) scanf("%lld %lld",&v[i].second,&v[i].first);
    sort(v.begin(),v.end());
    if(v[n-1].second!=v[n-2].second) printf("%lld\n",v[n-1].first+v[n-2].first);
    else{
        sum=v[n-1].first+(v[n-2].first/2);
        for(int i=n-2;i>=0;i--){
            if(v[i].second!=v[i+1].second){
                max=v[i].first;
                break;
            }
        }
        max+=v[n-1].first;
        if(max>sum) printf("%lld\n",max);
        else printf("%lld\n",sum);
    }
}