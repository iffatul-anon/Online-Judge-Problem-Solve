#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        long long a[n],count=0;
        for(int j=0;j<n;j++) scanf("%lld",&a[j]);
        for(int j=n-2;j>=0;j--){
            while(a[j]>=a[j+1] && a[j]>0){
                count++;
                a[j]=a[j]/2;
            }
            if(a[j]==a[j+1]){
                count=-1;
                break;
            }
        }
        printf("%lld\n",count);
    }
}