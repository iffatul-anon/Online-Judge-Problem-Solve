#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,sum=0;
        scanf("%lld",&n);
        long long a[2*n],b[n],c[n];
        for(int i=0;i<2*n;i++) scanf("%lld",&a[i]);
        sort(a,a+n+n);
        for(int i=0;i<n;i++){
            b[i]=a[i];
            c[i]=a[(2*n)-i-1];
            if(i!=0) sum+=llabs(b[i]-b[i-1])+llabs(c[i-1]-c[i]);
        }
        printf("%lld\n",sum);
        for(int i=0;i<n;i++) printf("%lld %lld\n",b[i],c[i]);
    }
}