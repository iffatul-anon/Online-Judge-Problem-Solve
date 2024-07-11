#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,y;
    scanf("%lld",&n);
    long long b[n];
    for(int i=0;i<n;i++) {
        scanf("%lld",&y);
        if(i==0) b[i]=y;
        else b[i]=y+b[i-1];
    }
    scanf("%lld",&m);
    for(int i=0;i<m;i++) {
        scanf("%lld",&y);
        long long x=lower_bound(b,b+n,y)-b;
        printf("%lld\n",x+1);
    }
}
