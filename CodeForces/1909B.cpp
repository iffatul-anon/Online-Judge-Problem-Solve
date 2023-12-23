#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,c=0,k=0,gcd;
        scanf("%lld",&n);
        long long a[n];
        map<long long,long long> mp;
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
            if(a[i]%2==0) c++;
        }
        for(int i=1;i<=60;i++){
            gcd=2;
            for(long long k=2;k<=i;k++) gcd=gcd*2;
            for(int j=0;j<n;j++) mp[a[j]%gcd]++;
            if(mp.size()==2){
                k=gcd;
                break;
            }
            mp.clear();
        }
        printf("%lld\n",k);
    }
}