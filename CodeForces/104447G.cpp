#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,x,c=0,x2;
        scanf("%lld %lld",&n,&x);
        int a[n],b[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
            int y=a[i]&x;
            if(y==x) {
                b[c++]=a[i];
            }
            //printf("%lld ",a[i]&x);
        }
        //printf("\n");
        if(c>0) x2=b[0];
        for(int i=0;i<c;i++) {
            //printf("%lld ",b[i]);
            x2=x2&b[i];
        }
        //printf("\n");
        //ok(0,0);
        if(c==0 || x2!=x) printf("-1\n");
        else printf("%lld\n",c);
    }
}

