#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,k,x;
        scanf("%lld %lld",&n,&k);
        vector<pair<long long,long long> > v(n);
        for(int i=0;i<n;i++){
            scanf("%lld",&x);
            if(x%k==0) v[i].first=k;
            else v[i].first=x%k;
            v[i].second=i+1;
        }
        sort(v.begin(),v.end(),greater<long long>());
        int a[n+1];
        x=0;
        a[x++]=0;
        for(int i=0;i<n-1;i++) if(v[i].first!=v[i+1].first) a[x++]=i+1;
        a[x]=n;
        for(int i=x-1;i>=0;i--) for(int j=a[i];j<a[i+1];j++) printf("%lld ",v[j].second);
        printf("\n");
    }
}