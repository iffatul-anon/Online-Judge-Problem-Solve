#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,c,max=-10000000000,sum1=0,sum2=0;
        scanf("%lld",&n);
        for(int i=0;i<n;i++){
            scanf("%lld",&c);
            if(max<c) max=c;
            if(c>0 && i%2==0) sum1+=c;
            if(c>0 && i%2!=0) sum2+=c;
        }
        if(max<sum1 && max>0) max=sum1;
        if(max<sum2 && max>0) max=sum2;
        printf("%lld\n",max);
    }
}