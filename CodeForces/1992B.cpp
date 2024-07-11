#include<iostream>
#include<algorithm>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,k,c=0;
        scanf("%lld %lld",&n,&k);
        int a[k];
        for(int i=0;i<k;i++) scanf("%lld",&a[i]);
        sort(a,a+k);
        for(int i=0;i<k-1;i++){
            if(a[i]>1) c+=a[i]+a[i]-1;
            else c++;
        }
        printf("%lld\n",c);
    }
    
}