#include<iostream>
#include<algorithm>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int l,r,c=0;
        scanf("%lld %lld",&l,&r);
        while(r>1){
            c++;
            r/=2;
        }
        printf("%lld\n",c);
    }
}