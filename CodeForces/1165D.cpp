#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,x;
        scanf("%lld",&n);
        vector<long long> a(n),b;
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        sort(a.begin(),a.end());
        x=a[0]*a[n-1];
        for(long long i=2;i*i<=x;i++){
            if(x%i==0){
                b.push_back(i);
                if(x/i!=i) b.push_back(x/i);
            }
        }
        sort(b.begin(),b.end());
        a==b ? printf("%lld\n",x) : printf("-1\n");
    }
}