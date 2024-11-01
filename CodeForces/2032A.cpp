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
        int n,c1=0;
        scanf("%lld",&n);
        int a[2*n];
        for(int i=0;i<2*n;i++) {
            scanf("%lld",&a[i]);
            if(a[i]==1) c1++;
        }
        if(c1%2) printf("1 ");
        else printf("0 ");
        if(c1<=n) printf("%lld\n",c1);
        else printf("%lld\n",n-(c1-n));
    }
}