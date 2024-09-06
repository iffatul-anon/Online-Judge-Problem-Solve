#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,q,l,r,x,y,z,sum=0;
        scanf("%lld %lld",&n,&q);
        int a[n+1],b[n+1];
        b[0]=0;
        for(int i=1;i<=n;i++){
            scanf("%lld",&a[i]);
            b[i]=b[i-1]+a[i];
        }
        while(q--){
            scanf("%lld %lld",&l,&r);
            if(r-l+1<=n) {

                printf("%lld\n",b[n]);
            }
            else{
                x=l/n;
                y=r/n;
                z=(r-l+1)/n;
                if(r%n!=0) {
                    int x1=r/n;
                    int x2=r%n;
                    int x3=n-x2;
                    if(x1==x3){
                        x=b[n]-
                    }
                    if(r%n==y){

                    }
                }
                if(l%n!=1){

                }
                sum+=z*b[n];
                sum+=(b[n]-b[x-1]);
                sum+=(b)


            }
        }
    }
}