#include<iostream>
#include<algorithm>
using namespace std;
long long GCD(long long n1, long long n2) {
    if (n2 != 0) return GCD(n2, n1 % n2);
    else return n1;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,gcd,x=0,y=0,z;
        scanf("%lld",&n);
        long long a[n],b[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            b[i]=a[n-1]-a[i];
            if(i==0) gcd=b[i];
            else gcd=GCD(gcd,b[i]);
        }
        for(int i=0;i<n-1;i++) y+=b[i]/gcd;
        x=a[n-1];
        for(int i=n-1;i>=0;i--){
            if(a[i]==x) x-=gcd;
            else break;
        }
        z=(a[n-1]-x)/gcd;
        printf("%lld\n",y+z);
    }
}