#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,k;
        scanf("%lld %lld",&n,&k);
        long long a[n+1],h[n+1],x[n+1];
        x[0]=0;
        for(int i=1;i<=n;i++){
            scanf("%lld",&a[i]);
            x[i]=x[i-1]+a[i];
        }
        for(int i=1;i<=n;i++) scanf("%lld",&h[i]);
        long long f=0,c=0,max=0;
        for(int i=1;i<n;i++){
            if(a[i]<=k && max==0) max=1;
            if(h[i]%h[i+1]==0){
                if(c==0) f=i;
                c=1;
                while(x[i+1]-x[f-1]>k) f++;
                if(i-f+2>max && i>=f) max=i-f+2;
            }
            else c=0;
        }
        if(max==0 && a[n]<=k) max=1;
        printf("%lld\n",max);
    }
}