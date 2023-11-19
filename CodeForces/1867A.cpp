#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,a;
        scanf("%lld",&n);
        vector<pair<long long,long long> >v(n),v2(n);
        for(int i=0;i<n;i++){
            scanf("%lld",&a);
            v[i].first=a;
            v[i].second=i;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            v2[i].first=v[i].second;
            v2[i].second=n-i;
        }
        sort(v2.begin(),v2.end());
        for(int i=0;i<n;i++) printf("%lld ",v2[i].second);
        printf("\n");
    }
}