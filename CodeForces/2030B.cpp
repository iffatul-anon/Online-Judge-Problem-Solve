#include <iostream>
using namespace std;
#define int long long
signed main(){
    int t;
    scanf("%lld", &t);
    while (t--){
        int n;
        scanf("%lld", &n);
        for(int i=1;i<n;i++) printf("0");
        printf("1\n");
    }
}