#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,max,min,f1=0,f2=0,count=0;
        scanf("%lld",&n);
        long long c[n],a[n],x=0;
        for(int i=0;i<n;i++) scanf("%lld",&c[i]);
        a[x++]=c[0];
        for(int i=1;i<n;i++){
            if(c[i]==a[x-1]) continue;
            a[x++]=c[i];
        }
        if(x==1) printf("%lld\n",a[0]-1);
        else {
            if(a[x-1]==0) x--;
            else a[x]=0;
            f1=0;
            f2=1;
            min=10000000000;
            max=0;
            if(a[0]<a[1]) {
                f1=0;
                max=a[1];
            }
            else {
                f1=1;
                min=a[1];
                max=a[0];
            }
            for(int i=1;i<x;i++){
                if(f1==0 && a[i]<a[i+1]) max=a[i+1];
                else if(f1==0 && a[i]>a[i+1]) {
                    f1=1;
                    min=a[i+1];
                }
                else if(f1==1 && a[i]>a[i+1]) min=a[i+1];
                else if(f1==1 && a[i]<a[i+1]){
                    count+=max-f2;
                    f2=min;
                    min=10000000000;
                    max=a[i+1];
                    f1=0;
                }
            }
            count+=max-f2;
            printf("%lld\n",count);
        }
    }
}