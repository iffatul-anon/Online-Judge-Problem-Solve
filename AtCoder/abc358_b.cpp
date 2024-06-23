#include <iostream>
#include <algorithm>
#define int long long
using namespace std;
signed main(){
    int n, a, t, x = 0;
    scanf("%lld %lld", &n, &a);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &t);
        if (x < t){
            x = t + a;
            printf("%lld\n", x);
        }
        else{
            x += a;
            printf("%lld\n", x);
        }
    }
}