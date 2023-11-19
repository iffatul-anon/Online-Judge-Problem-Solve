#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,max=-1000000000000,count=0;
        scanf("%lld",&n);
        long long a[n],b[n],c[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        for(int i=0;i<n;i++){
            scanf("%lld",&b[i]);
            c[i]=a[i]-b[i];
            if(max<c[i]) max=c[i];
        }
        for(int i=0;i<n;i++) if(max==c[i]) count++;
        printf("%lld\n",count);
        for(int i=0;i<n;i++) if(max==c[i]) printf("%d ",i+1);
        printf("\n");
    }
}