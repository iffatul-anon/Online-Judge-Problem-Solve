#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long n,sum=0;
    scanf("%lld",&n);
    long long p[n];
    for(int i=0;i<n;i++) scanf("%lld",&p[i]);
    sort(p,p+n);
    for(int i=0;i<n;i++) sum+=llabs(p[n/2]-p[i]);
    printf("%lld\n",sum);
}