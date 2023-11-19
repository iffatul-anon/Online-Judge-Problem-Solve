#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,count=1;
        scanf("%d",&n);
        int a[n],b[n],x=0,max=0;
        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
            if(i!=0 && a[i]==a[i-1]) count++;
            if(max<a[i]){
                max=a[i];
                x=1;
            }
            else if(max==a[i]) x++;
        }
        if(count==n) printf("-1\n");
        else {
            printf("%d %d\n",n-x,x);
            for(int i=0;i<n;i++) if(a[i]!=max) printf("%d ",a[i]);
            printf("\n");
            for(int i=0;i<x;i++) printf("%d ",max);
            printf("\n");
        }
    }
}