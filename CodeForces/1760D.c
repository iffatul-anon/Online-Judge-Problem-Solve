#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,count=0;
        scanf("%d",&n);
        int a[n],b[n],x=0;
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        for(int i=0;i<n;i++) if(a[i]!=a[i+1] || i==n-1) b[x++]=a[i];
        for(int i=0;i<x;i++) if((i==0 || b[i-1]>b[i]) && (b[i]<b[i+1] || i==x-1)) count++;
        if(count==1) printf("YES\n");
        else printf("NO\n");
    }
}