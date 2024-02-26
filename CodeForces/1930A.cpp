#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,sum=0;
        scanf("%lld",&n);
        long long a[2*n];
        for(int i=0;i<2*n;i++) scanf("%lld",&a[i]);
        sort(a,a+(2*n));
        for(int i=(2*n)-1;i>=0;i--) if(i%2==0) sum+=a[i];
        printf("%lld\n",sum);
    }
}