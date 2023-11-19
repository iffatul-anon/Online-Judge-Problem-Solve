#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,i,count=0;
        scanf("%lld",&n);
        long long a[n],sum,sum1,flag=0;
        for(i=0;i<n;i++){ 
            scanf("%lld",&a[i]);
            if(i==0) sum=a[i];
            else sum=sum&a[i];
        }
        if(sum!=0) printf("1\n");
        else{
            for(i=0;i<n;i++){ 
                if(flag==0){ 
                    sum1=a[i];
                    flag=1;
                }
                else sum1=sum1&a[i];
                if(sum==sum1){
                    count++;
                    flag=0;
                }
            }
            printf("%lld\n",count);
        }
    }
}