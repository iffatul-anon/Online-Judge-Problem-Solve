#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,max=0,f1,f2,sum;
        scanf("%lld",&n);
        long long a[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        for(int j=1;j<=n/2;j++){
            if(n%j==0){
                f1=0;
                f2=100000000000000000;
                for(int i=0;i<n;i=i+j){
                    sum=0;
                    for(int k=i;k<j+i;k++){
                        sum+=a[k];
                    }
                    if(sum>f1) f1=sum;
                    if(sum<f2) f2=sum;
                }
                if(f1-f2>max) max=f1-f2;
            }
        }
        printf("%lld\n",max);
    }
}