#include<iostream>
#include<algorithm>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,m,n2,n3,m2,m3,sum=0,f1,f2,sum1=0,sum2=0,f3,f4;
        scanf("%lld %lld",&n,&m);
        n2=n3=n;
        m2=m3=m;
        f1=f2=n+m+1;
        int a[n+m+2],b[n+m+2],c[n+m+2];
        for(int i=1;i<=n+m+1;i++) {
            scanf("%lld",&a[i]);
            sum1+=a[i];
        }
        for(int i=1;i<=n+m+1;i++) {
            scanf("%lld",&b[i]);
            sum2+=b[i];
        }
        if(n==0) for(int i=1;i<=n+m+1;i++) c[i]=sum2-b[i];
        else if(m==0) for(int i=1;i<=n+m+1;i++) c[i]=sum1-a[i];
        else{
            for(int i=1;i<=n+m;i++){
                if(a[i]>b[i] && n2){
                    n2--;
                    if(n2==0) f3=i+1;
                    sum+=a[i];
                }
                else if(a[i]>b[i]){
                    if(n2==0 && f1==n+m+1) f1=i;
                    sum+=b[i];
                }
                else if(a[i]<b[i] && m2){
                    m2--;
                    if(m2==0) f4=i+1;
                    sum+=b[i];
                }
                else if(a[i]<b[i]){
                    if(m2==0 && f2==n+m+1) f2=i;
                    sum+=a[i];
                }
            }
            if(n2==0){
                for(int i=1;i<=n+m;i++){
                    if(i<f3 && a[i]>b[i]){
                        if(f1==n+m+1) c[i]=sum-a[i]+a[f1];
                        else c[i]=sum-a[i]+a[f1]-b[f1]+b[n+m+1];
                    }
                    else{
                        c[i]=sum-b[i]+b[n+m+1];
                    }
                }
            }
            else if(m2==0){
                for(int i=1;i<=n+m;i++){
                    if(i<f4 && a[i]<b[i]){
                        if(f2==n+m+1) c[i]=sum-b[i]+b[f1];
                        else c[i]=sum-b[i]+b[f2]-a[f2]+a[n+m+1];
                    }
                    else{
                        c[i]=sum-a[i]+a[n+m+1];
                    }
                }
            }
            c[n+m+1]=sum;
        }
        for(int i=1;i<=n+m+1;i++) printf("%lld ",c[i]);
        printf("\n");
    }
}