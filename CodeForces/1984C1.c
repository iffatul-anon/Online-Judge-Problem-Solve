#include<stdio.h>
#include<stdlib.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,sum=0,x=0,y=-1,min=0;
        scanf("%lld",&n);
        int a[n],b[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        for(int i=0;i<n;i++) {
            sum+=a[i];
            if(sum<min) {
                min=sum;
                y=i;
            }
        }
        if(y==-1) printf("%lld\n",sum);
        else{
            sum=llabs(min);
            for(int i=y+1;i<n;i++) sum=llabs(a[i]+sum);
            printf("%lld\n",sum);
        }
    }
}
