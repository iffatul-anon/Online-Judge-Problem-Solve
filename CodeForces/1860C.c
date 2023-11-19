#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,count=0,y;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        x=a[0];
        y=n+1;
        for(int i=0;i<n;i++){
            if(a[i]>x && a[i]<y){
                count++;
                y=a[i];
            }
            else if(a[i]<x) x=a[i];
        }
        printf("%d\n",count);
    }
}