#include<stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,sum=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    int tem=a[i];
                    a[i]=a[j];
                    a[j]=tem;
                }
            }
        }
        for(int i=0;i<n/2;i++) sum+=a[n-i-1]-a[i];
        printf("%d\n",sum);
    }
}