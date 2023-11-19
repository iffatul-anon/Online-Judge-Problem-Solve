#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        unsigned long long int n,k,max=0,sum=0;
        scanf("%llu %llu",&n,&k);
        long long int a[n];
        for(int j=0;j<n;j++){
            scanf("%lld",&a[j]);
            sum=sum+a[j];
            if(max<a[j]){
                max=a[j];
            }
        }
        sum=sum+(max*k);
        printf("Case %d: %llu\n",i,sum-max);
    }
    return 0;
}