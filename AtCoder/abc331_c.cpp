#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    long long n,l,sum1=0,sum2=0;
    scanf("%lld",&n);
    long long a[n];
    map<long long,long long>mp;
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
        mp[a[i]]+=a[i];
    }
    vector<long long>v1,v2;
    map<long long,long long>:: iterator it=mp.begin();
    while(it!=mp.end()){
        v1.push_back(it->first);
        v2.push_back(it->second);
        it++;
    }
    l=v1.size();
    for(int i=l-1;i>=0;i--){
        sum1+=v2[i];
        v2[i]=sum2;
        sum2=sum1;
    }
    vector<long long>:: iterator it2;
    for(int i=0;i<n;i++){
        it2=lower_bound(v1.begin(),v1.end(),a[i]);
        printf("%lld ",v2[it2-v1.begin()]);
    }
    printf("\n");
}