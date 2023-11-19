#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[2*n+10],x=0,b;
        for(int i=0;i<n;i++){
            scanf("%d",&b);
            if(i==0) a[x++]=b;
            else if(a[x-1]<=b) a[x++]=b;
            else {
                a[x++]=1;
                a[x++]=b;
            }
        }
        printf("%d\n",x);
        for(int i=0;i<x;i++) printf("%d ",a[i]);
        printf("\n");
    }
}