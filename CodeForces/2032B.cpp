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
        int n,k;
        scanf("%lld %lld",&n,&k);
        if(n==1) printf("1\n1\n");
        else if(k%2==0) {
            printf("3\n");
            printf("1 %lld %lld\n",k,k+1);
        }
        else if(k%2==1 && k>1 && k<n) {
            printf("5\n");
            printf("1 2 %lld %lld %lld\n",k,k+1,n);
        }
        else printf("-1\n");
    }
}