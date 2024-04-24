#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long n,a,b,sum=0;
    scanf("%lld %lld %lld",&n,&a,&b);
    long long anon[n];
    for(int i=0;i<n;i++) scanf("%lld",&anon[i]);
    sort(anon,anon+n);
    if(a<0) for(int i=0;i<n;i++) sum+=(i+1)*((a*anon[n-i-1])+b);
    else for(int i=0;i<n;i++) sum+=(i+1)*((a*anon[i])+b);
    printf("%lld\n",sum);
}