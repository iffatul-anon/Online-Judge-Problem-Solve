#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <queue>
#include <tuple>
#include <cassert>
#include <bitset>
#include <iomanip>
#include <cctype>
using namespace std;
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,a,b,mx=0,my=0;
        scanf("%lld",&n);
        for(int i=0;i<n;i++) {
            scanf("%lld %lld",&a,&b);
            if(a>mx) mx=a;
            if(b>my) my=b;
        }
        printf("%lld\n",mx+mx+my+my);
    }
}