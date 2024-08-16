#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,sum=0,x=-1,y=-1;
        scanf("%lld",&n);
        int a[n],b[n];
        for(int i=0;i<n;i++) {
            scanf("%lld",&a[i]);
            if(i==0) b[i]=a[i];
            else b[i]=b[i-1]+a[i];
        }
        char s[n+1];
        scanf("%s",s);
        int l=-1,r=n;
        while(l<r){
            for(l=l+1;l<r;l++){
                if(s[l]=='L') {
                    x=l;
                    break;
                }
            }
            for(r=r-1;r>l;r--){
                if(s[r]=='R') {
                    y=r;
                    break;
                }
            }
            if(l<r) {
                if(l>0) sum+=(b[r]-b[l-1]);
                else sum+=b[r];
            }
        }
        printf("%lld\n",sum);
    }
}