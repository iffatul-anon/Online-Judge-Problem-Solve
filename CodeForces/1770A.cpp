#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,m,b,sum=0,max=0;
        scanf("%lld %lld",&n,&m);
        vector<long long> a(n);
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        for(int i=0;i<m;i++) {
            scanf("%lld",&b);
            sort(a.begin(),a.end());
            a.erase(a.begin());
            a.push_back(b);
        }
        for(int i=0;i<n;i++) sum+=a[i];
        printf("%lld\n",sum);
    }
}