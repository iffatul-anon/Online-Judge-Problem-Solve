#include<iostream>
#include<algorithm>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,k,a[100000],x=0;
        scanf("%lld %lld",&n,&k);
        for(int i=1;i*i<=n;i++){
            if(n%i==0) {
                a[x++]=i;
                a[x++]=n/i;
            }
        }
        sort(a,a+x);
        for(int i=x-1;i>=0;i--){
            if(a[i]<=k){
                x=a[i];
                break;
            }
        }
        printf("%lld\n",n/x);
    }
}
