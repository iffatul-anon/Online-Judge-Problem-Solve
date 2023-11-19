#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,k,max=1,count=1;
        scanf("%lld %lld",&n,&k);
        long long a[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        sort(a,a+n);
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]<=k) count++;
            else count=1;
            if(max<count) max=count;
        }
        printf("%lld\n",n-max);
    }
}