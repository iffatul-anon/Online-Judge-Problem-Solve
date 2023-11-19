#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b,n,sum=0;
        scanf("%lld %lld %lld",&a,&b,&n);
        sum=b;
        long long x[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&x[i]);
            if(x[i]<a) sum+=x[i];
            else sum+=a-1;
        }
        printf("%lld\n",sum);
    }
}