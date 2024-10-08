#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n,a,b,c,x,k,sum=0;
    scanf("%lld %lld",&n,&k);
    while(n>0){
        if(n>3){
                n-=4;
            sum++;
            k--;
            if(k==0) k=4;
        }
        else{
            if(k<=n) sum++;
            n-=4;
        }
    }
    printf("%lld\n",sum);
}
