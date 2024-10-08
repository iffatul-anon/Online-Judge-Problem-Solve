#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n,mex=0,p;
    scanf("%lld",&n);
    int a[200010]={0};
    for(int i=0;i<n;i++){
        scanf("%lld",&p);
        a[p]=1;
        while(a[mex]) mex++;
        printf("%lld\n",mex);
    }
}
