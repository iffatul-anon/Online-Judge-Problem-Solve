#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int t,n,k;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld",&n,&k);
        long long int a[k],m=0,j=0;
        for(long long int i=0;i<k;i++) scanf("%lld",&a[i]);
        sort(a,a+k,greater<long long>());
        while(m<n && j<=k) m+=(n-a[j++]);
        j--;
        printf("%lld\n",j);
    }
}