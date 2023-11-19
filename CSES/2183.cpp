#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long n,sum=0;
    scanf("%lld",&n);
    long long a[n];
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(sum+1<a[i]) break;
        sum+=a[i];
    }
    printf("%lld\n",sum+1);
}