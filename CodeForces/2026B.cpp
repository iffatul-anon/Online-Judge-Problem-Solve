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
        int n,mx=0,mn=1000000000000000000;
        scanf("%lld",&n);
        int a[n],b[n];
        for(int i=0; i<n; i++) scanf("%lld",&a[i]);
        if(n==1) printf("1\n");
        else if(n%2==0){
            for(int i=0;i<n-1;i+=2){
                if(a[i+1]-a[i]>mx) mx=a[i+1]-a[i];
            }
            printf("%lld\n",mx);
        }
        else{
            for(int j=0;j<n;j+=2){
                mx=0;
                for(int i=0;i<j; i+=2){
                    if(a[i+1]-a[i]>mx) mx=a[i+1]-a[i];
                }
                for(int i=j+1;i<n-1; i+=2){
                    if(a[i+1]-a[i]>mx) mx=a[i+1]-a[i];
                }
                if(mx<mn) mn=mx;
            }
            printf("%lld\n",mn);
        }
    }
}