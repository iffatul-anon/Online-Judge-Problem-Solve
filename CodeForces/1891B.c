#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,q,y,z;
        scanf("%lld %lld",&n,&q);
        long long a[n],x[q];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        for(int i=0;i<q;i++) scanf("%lld",&x[i]);
        y=x[0];
        z=pow(2,y);
        for(int i=0;i<n;i++) if(a[i]%z==0) a[i]+=pow(2,y-1);
        for(int i=1;i<q;i++){
            if(y<=x[i]) continue;
            y=x[i];
            z=pow(2,y);
            for(int j=0;j<n;j++) if(a[j]%z==0) a[j]+=pow(2,y-1);
        }
        for(int i=0;i<n;i++) printf("%lld ",a[i]);
        printf("\n");
    }
}