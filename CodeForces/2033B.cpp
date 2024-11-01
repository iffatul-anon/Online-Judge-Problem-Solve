#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,sum=0,mn=0;
        scanf("%lld",&n);
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%lld",&a[i][j]);
            }
        }
        for(int c=0;c<n;c++){
            mn=0;
            for(int i=0;i<n-c;i++){
                if(a[i][i+c]<mn) mn=a[i][i+c];
            }
            sum+=mn;
        }
        for(int c=1;c<n;c++){
            mn=0;
            for(int i=0;i<n-c;i++){
                if(a[i+c][i]<mn) mn=a[i+c][i];
            }
            sum+=mn;
        }

        printf("%lld\n",-sum);
    }
}