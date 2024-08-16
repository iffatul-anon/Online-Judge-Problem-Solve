#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,l1,l2,r1,r2,f=0,m;
        scanf("%lld",&n);
        int a[n],b[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        for(int i=0;i<n;i++) scanf("%lld",&b[i]);
        l1=l2=0;
        r1=r2=n-1;
        m=n;
        while(m--){
            if((a[l1]==b[l2] || a[l1]==b[r2]) && (a[r1]==b[l2] || a[r1]==b[r2])){
            if(a[l1]==b[l2]){
                l1++;
                l2++;
            }
            else if(a[l1]==b[r2]){
                l1++;
                r2--;
            }
            else if(a[r1]==b[l2]){
                r1--;
                l2++;
            }
            else if(a[r1]==b[r2]){
                r1--;
                r2--;
            }
            }
            else{
                f=1;
                break;
            }
        }
        if(f) printf("Alice\n");
        else printf("Bob\n");
    }
}