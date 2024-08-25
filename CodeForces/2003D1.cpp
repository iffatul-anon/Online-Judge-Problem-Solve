#include<iostream>
#include<algorithm>
#include<set>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,m,x,y,mex=0,max=0;
        scanf("%lld %lld",&n,&m);
        for(int i=0;i<n;i++){
            scanf("%lld",&x);
            set<int>s;
            for(int j=0;j<x;j++) {
                scanf("%lld",&y);
                s.insert(y);
            }
            int a[s.size()];
            x=0;
            for(auto it : s) a[x++]=it;
            mex=0;
            while(mex==a[mex] && mex<=x) mex++;
            mex++;
            while(mex==a[mex-1] && mex<=x) mex++;
            if(max<mex) max=mex;
        }
        if(m>max) x=((max+1)*max)+((m*(m+1))/2)-((max*(max+1))/2);
        else x=(m+1)*max;
        printf("%lld\n",x);
    }
}