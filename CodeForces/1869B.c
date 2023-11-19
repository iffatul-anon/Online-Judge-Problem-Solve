#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,k,a,b,min1=1000000000000000,min2=100000000000000,anon=0;
        scanf("%lld %lld %lld %lld",&n,&k,&a,&b);
        long long x[n],y[n];
        for(int i=0;i<n;i++) scanf("%lld %lld",&x[i],&y[i]);
        anon=llabs(x[a-1]-x[b-1])+llabs(y[a-1]-y[b-1]);
        for(int i=0;i<k;i++){
            if(llabs(x[i]-x[a-1])+llabs(y[i]-y[a-1])<min1) min1=llabs(x[i]-x[a-1])+llabs(y[i]-y[a-1]);
            if(llabs(x[i]-x[b-1])+llabs(y[i]-y[b-1])<min2) min2=llabs(x[i]-x[b-1])+llabs(y[i]-y[b-1]);
        }
        if(anon>min1+min2)printf("%lld\n",min1+min2);
        else printf("%lld\n",anon);
    }
}