#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,i;
        scanf("%lld",&n);
        long long a[n],b[n];
        for(i=0;i<n;i++) {
            scanf("%lld",&a[i]);
            b[i]=a[i];
        }
        sort(b,b+n);
        for(i=n-1;i>=0;i--) if(a[i]!=b[i]) break;
        if(i<0) printf("0\n");
        else printf("%lld\n",b[i]);
    }
}