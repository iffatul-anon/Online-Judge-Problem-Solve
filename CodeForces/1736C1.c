#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,count=1,sum=0;
        scanf("%lld",&n);
        long long a[n+1];
        a[n]=0;
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        for(int i=0;i<=n;i++){
            if(a[i]>=count) count++;
            else{
                sum+=((count*(count-1))/2)-((a[i]*(a[i]-1))/2);
                count=a[i]+1;
            }
        }
        printf("%lld\n",sum);
    }
}
