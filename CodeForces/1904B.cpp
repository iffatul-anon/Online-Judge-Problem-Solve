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
        long long a[n],b[n],c[n];
        vector<pair<long long,long long> > v(n);
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
            v[i].first=a[i];
            v[i].second=i;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                sum+=v[j].first;
                if(sum<v[j+1].first || j==n-1){
                    for(int k=i;k<=j;k++) a[v[k].second]=j;
                    i=j;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++) printf("%lld ",a[i]);
        printf("\n");
    }
}