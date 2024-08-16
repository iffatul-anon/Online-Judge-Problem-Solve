#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n;
        scanf("%lld",&n);
        int m=n,a[100],x=0,b[100],y=0,z=1,sum=0;
        while(m>0){
            a[x++]=m%2;
            m/=2;
        }
        for(int i=0;i<x;i++){
            if(a[i]==1) b[y++]=z;
            z*=2;
        }
        if(y==1) printf("1\n");
        else{
            for(int i=0;i<y;i++) sum+=b[i];
            printf("%lld\n",y+1);
            for(int i=y-1;i>=0;i--) printf("%lld ",sum-b[i]);
        }
        printf("%lld\n",n);
    }
}