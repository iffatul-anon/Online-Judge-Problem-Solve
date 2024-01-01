#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        long long a[n+1],sum=0,f1=0,max=-100000000000;
        a[0]=0;
        for(int i=1;i<=n;i++){
            scanf("%lld",&a[i]);
            if(a[i]>0) sum+=a[i];
            if(a[i]>=0 && f1==0) f1=i;
            if(a[i]>max && f1==0) max=a[i];
        }
        if(f1%2==1 || f1>2) printf("%lld\n",sum);
        else {
            if(-max<a[f1]) sum+=max;
            else sum-=a[f1];
            printf("%lld\n",sum);
        }
    }
}