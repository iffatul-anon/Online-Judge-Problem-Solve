#include<iostream>
#include<algorithm>
using namespace std;
long long d[100000],x=0,i;
int ok(long long n){
    for(i=1;i*i<=n;i++){
        if(n%i==0){
            d[x++]=i;
            if(n/i!=i) d[x++]=n/i;
        }
    }
    sort(d,d+x);
    return x;
}
int main(){
    long long n,k,x;
    scanf("%lld %lld",&n,&k);
    x=ok(n);
    if(k>x) printf("-1\n");
    else printf("%lld\n",d[k-1]);
}