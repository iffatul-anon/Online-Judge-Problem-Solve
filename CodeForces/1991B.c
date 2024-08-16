#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,f=0,x;
        scanf("%lld",&n);
        int a[n],b[n];
        for(int i=0;i<n-1;i++) scanf("%lld",&b[i]);
        a[0]=a[1]=b[0];
        for(int i=1;i<n-1;i++){
            a[i+1]=b[i];
            x=a[i]&a[i+1];
            if(x<b[i]) a[i]+=b[i]-x;
            else if(x>b[i]) a[i]-=b[i]-x;
        }
        for(int i=0;i<n-1;i++){
            if(b[i]!=(a[i]&a[i+1])) f=1;
        }
        if(f) printf("-1\n");
        else {
            for(int i=0;i<n;i++) printf("%lld ",a[i]);
            printf("\n");
        }
    }
}