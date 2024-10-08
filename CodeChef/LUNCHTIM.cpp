#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,x,y;
        scanf("%lld",&n);
        int a[n],b[n];
        memset(b,-1,sizeof(b));
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        for(int i=0;i<n;i++){
            if(b[i]!=-1) continue;
            int c=0;
            for(int j=i+1;j<n;j++){
                if(a[i]<a[j]) break;
                if(a[i]==a[j]) c++;
            }
            b[i]=c;
            for(int j=i+1;j<n;j++){
                if(a[i]<a[j]) break;
                if(a[i]==a[j]) b[j]=c;
            }
        }
        for(int i=0;i<n;i++) printf("%lld ",b[i]);
        printf("\n");
    }
}

