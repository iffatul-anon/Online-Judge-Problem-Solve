#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,k=0,x=1073741824,max=0;
        scanf("%lld",&n);
        int a[n],b[50];
        for(int i=0;i<n;i++) {
            scanf("%lld",&a[i]);
            if(a[i]>max) max=a[i];
        }
        while(k<40 && max>0){
            while(max<=x) x/=2;
            if(x==0) x=1;
            max=0;
            for(int i=0;i<n;i++){
                a[i]=llabs(a[i]-x);
                if(a[i]>max) max=a[i];
            }
            b[k++]=x;
        }
        if(max>0) printf("-1\n");
        else{
            printf("%lld\n",k);
            for(int i=0;i<k;i++) printf("%lld ",b[i]);
            printf("\n");
        }
    }
}