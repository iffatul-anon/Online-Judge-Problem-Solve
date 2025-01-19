#include<stdio.h>
#include<stdlib.h>
#define int long long
signed main() {
    int t;
    scanf("%lld", &t);
    while(t--){
        int n,c=0,sum=0,min=1000000000000;
        scanf("%lld", &n);
        int a[n],b[n];
        for(int i=0;i<n;i++) scanf("%lld", &a[i]);
        for(int i=0;i<n;i++)  scanf("%lld", &b[i]);
        for(int i=0;i<n;i++) {
            if(a[i]<b[i]){
                sum=b[i]-a[i];
                c++;
            }
            else if(a[i]-b[i]<min) min=a[i]-b[i];
        }

        if(c==0 || (c==1 && sum<=min)) printf("YES\n");
        else printf("NO\n");
    }
}   