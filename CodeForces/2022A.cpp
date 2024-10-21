#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,r,c=0,r2=0,sum=0;
        scanf("%lld %lld",&n,&r);
        int a[n];
        for(int i=0;i<n;i++) {
            scanf("%lld",&a[i]);
            r2+=a[i]/2;
            if(a[i]%2){
                c++;
            }
            sum+=a[i];
        }
        int r3=r-r2;
        if(r3>=c) printf("%lld\n",sum);
        else{
            int x=(c-r3)*2;
            printf("%lld\n",sum-x);
        }
    }
}