#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,f=1;
        scanf("%lld",&n);
        int c=1,x=0;
        while(llabs(x)<=n){
            if(c%2) x-=(2*c)-1;
            else x+=(2*c)-1;
            c++;
        }
        if(c%2==0) printf("Sakurako\n");
        else printf("Kosuke\n");
    }
}