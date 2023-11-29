#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,y=0,max=0;
        scanf("%d %d",&n,&x);
        int a[n];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        for(int i=0;i<n;i++){
            if(a[i]-y>max) max=a[i]-y;
            y=a[i];
        }
        if((x-a[n-1])*2>max) max=(x-a[n-1])*2;
        printf("%d\n",max);
    }
}