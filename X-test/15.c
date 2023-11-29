#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,x,y,z=0,max=0,min=10000000000;
        scanf("%lld",&n);
        long long a[n],b[n];
        for(int i=0;i<n;i++) {
            scanf("%lld",&a[i]);
            if(a[i]>max) max=a[i];
            if(a[i]<min) min=a[i];
        }
        if(min==max) printf("0\n");
        else{
            x=min;
            y=max;
            while(1){
                if(y-x==1 && x%2==1) {
                    if(z<n) b[z]=1;
                    z++;
                    break;
                }
                else {
                    if(z<n) b[z]=0;
                    z++;
                }
                x=x/2;
                y=y/2;
                if(x==y) break;
            }
            printf("%lld\n",z);
            if(z<=n){
                for(int i=0;i<z;i++) printf("%d ",b[i]);
                printf("\n");
            }
        }
    }
}