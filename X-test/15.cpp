#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,c,d,k=0,sum=0;
        scanf("%lld %lld %lld",&n,&c,&d);
        long long a[n];
        for(int i=0;i<n;i++) {
            scanf("%lld",&a[i]);
            sum+=a[i];
        }
        sort(a,a+n);
        if(a[n-1]>=c || (sum>=c && d>=n)) printf("Infinity\n");
        else if(a[n-1]*d<c) printf("Impossible\n");
        else if(d<n){
            for(int i=n-1;i>=0 && d--;i--) sum2+=a[i];
            if()
        }
        else{
            printf("%lld\n",k);
        }
    }
}