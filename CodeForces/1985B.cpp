#include<iostream>
#include<algorithm>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,max=0,sum=0,x=0,anon;
        scanf("%lld",&n);
        for(int i=2;i<=n;i++){
            sum=0;
            x=i;
            while(x<=n){
                sum+=x;
                x+=i;
            }
            if(sum>max) {
                max=sum;
                anon=i;
            }
        }
        printf("%lld\n",anon);
    }
}