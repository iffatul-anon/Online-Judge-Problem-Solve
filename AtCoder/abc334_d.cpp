#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long long n,q,x;
    scanf("%lld %lld",&n,&q);
    long long r[n];
    for(int i=0;i<n;i++) scanf("%lld",&r[i]);
    sort(r,r+n);
    vector<long long> v(n);
    v[0]=r[0];
    for(int i=1;i<n;i++) v[i]=v[i-1]+r[i];
    for(int i=0;i<q;i++){
        scanf("%lld",&x);
        printf("%lld\n",upper_bound(v.begin(),v.end(),x)-v.begin());
    }
}