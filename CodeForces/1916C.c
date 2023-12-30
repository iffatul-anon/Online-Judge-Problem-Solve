#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,x=0,y;
        scanf("%lld",&n);
        long long a[n],b[n],c[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
            if(i==0) b[i]=a[i];
            else b[i]=b[i-1]+a[i];
            if(a[i]%2==1) x++;
            c[i]=x;
        }
        printf("%lld ",a[0]);
        for(int i=1;i<n;i++){
            x=c[i]%3;
            y=c[i]/3;
            if(x==1) y++;
            printf("%lld ",b[i]-y);
        }
        printf("\n");
    }
}