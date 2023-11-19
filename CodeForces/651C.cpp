#include<iostream>
#include<map>
using namespace std;
int main() {
    long long n,count=0,a,b;
    scanf("%lld",&n);
    map<pair<long long,long long>,long long>v;
    map<long long,long long>x,y;
    for(int i=0;i<n;i++) {
        scanf("%lld %lld",&a,&b);
        v[make_pair(a,b)]++;
        x[a]++;
        y[b]++;
    }
    for (auto it : x) count+=(it.second*(it.second-1))/2;
    for (auto it : y) count+=(it.second*(it.second-1))/2;
    for (auto it : v) count-=(it.second*(it.second-1))/2;
    printf("%lld\n",count);
}