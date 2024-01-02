#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,min=100000000000,x,c=0,i;
        scanf("%lld",&n);
        long long a[n];
        for(i=0;i<n;i++){
            scanf("%lld",&a[i]);
            if(a[i]<min) {
                min=a[i];
                x=i;
            }
        }
        printf("%lld\n",n-1);
        for(i=x-1;i>=0;i--){
            c++;
            if(c%2==0) printf("%lld %lld %lld %lld\n",x+1,i+1,min,min);
            else printf("%lld %lld %lld %lld\n",x+1,i+1,min,min+1);
        }
        c=0;
        for(i=x+1;i<n;i++){
            c++;
            if(c%2==0) printf("%lld %lld %lld %lld\n",x+1,i+1,min,min);
            else printf("%lld %lld %lld %lld\n",x+1,i+1,min,min+1);
        }
    }
}