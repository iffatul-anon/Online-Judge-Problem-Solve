#include<stdio.h>
#define int long long
signed main() {
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,c=0,x,y,c2=0,x2,y2;
        scanf("%lld",&n);
        int a[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        for(int i=0;i<n;i++){
            if(a[i]==0) {
                c++;
                y=i+1;
            }
            if(a[i]==0 && c==1) x=i+1;
            if(a[i]!=0) {
                c2++;
                y2=i+1;
            }
            if(a[i]!=0 && c2==1) x2=i+1;
        }
        if(c==n) printf("0\n");
        else if(c==0) printf("1\n");
        else if(y-x+1==c && y2-x2+1==c2) printf("1\n");
        else if(y-x+1==c) printf("2\n");
        else if(y2-x2+1==c2) printf("1\n");
        else printf("2\n");
    }
}