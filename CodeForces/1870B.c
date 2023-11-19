#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,m,x,y,z;
        scanf("%lld %lld",&n,&m);
        long long a[n],b[m];
        for(int i=0;i<n;i++) {
            scanf("%lld",&a[i]);
            if(i==0) x=a[i];
            else x=x^a[i];
        }
        for(int i=0;i<m;i++) {
            scanf("%lld",&b[i]);
            if(i==0) z=b[i];
            z=z|b[i];
        }
        y=a[0]|z;
        for(int i=1;i<n;i++) y=y^(a[i]|z);
        if(x<y) printf("%lld %lld\n",x,y);
        else printf("%lld %lld\n",y,x);
    }
}