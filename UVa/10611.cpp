#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long n,q,x,y,z;
    scanf("%lld",&n);
    long long a[n+2];
    a[0]=0;
    a[n+1]=2147483648;
    for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
    scanf("%lld",&q);
    for(int i=0;i<q;i++){
        scanf("%lld",&x);
        y=lower_bound(a,a+n+2,x)-a;
        z=upper_bound(a,a+n+2,x)-a;
        if(a[y-1]==0) printf("X ");
        else printf("%lld ",a[y-1]);
        if(a[z]==2147483648) printf("X\n");
        else printf("%lld\n",a[z]);
    }
}