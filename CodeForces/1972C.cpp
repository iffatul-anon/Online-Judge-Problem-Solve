#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,k,x,i;
        scanf("%lld %lld",&n,&k);
        vector<long long> v(n);
        for(i=0;i<n;i++) scanf("%lld",&v[i]);
        sort(v.begin(),v.end());
        for(i=1;i<n;i++){
            if(v[i]>v[i-1]){
                x=v[i]-v[i-1];
                if(x*i<=k) k-=x*i;
                else break;
            }
        }
        x=v[i-1]+(k/i);
        k=k%i;
        printf("%lld\n",((x-1)*n)+n-i+k+1);
    }
}