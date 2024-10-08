#include <bits/stdc++.h>
#define int long long
using namespace std;
int GCD(int n1,int n2){
    return n2==0?n1:GCD(n2,n1%n2);
}
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,x,f=1;
        scanf("%lld",&n);
        int b[n];
        scanf("%lld",&b[0]);
        x=b[0];
        for(int i=1;i<n;i++){
            scanf("%lld",&b[i]);
            x=GCD(x,b[i]);
            if(x!=b[i]) f=0;
        }
        if(f){
            for(int i=0;i<n;i++) printf("%lld ",b[i]);
            printf("\n");
       }
        else printf("-1\n");
    }
}



