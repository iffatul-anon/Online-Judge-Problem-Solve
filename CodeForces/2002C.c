#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,x1,y1,x2,y2,f=1,d,ab;
        scanf("%lld",&n);
        int a[n],b[n];
        for(int i=0;i<n;i++) scanf("%lld %lld",&a[i],&b[i]);
        scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
        ab=((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
        for(int i=0;i<n;i++){
            d=((a[i]-x2)*(a[i]-x2))+((b[i]-y2)*(b[i]-y2));
            if(d<=ab) f=0;
        }
        if(f) printf("YES\n");
        else printf("NO\n");
    }
}