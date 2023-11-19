#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n],c[n],count=1,max=0;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    b[0]=1;
    c[n-1]=1;
    for(int i=1;i<n;i++){
        if(a[i-1]<a[i]) count++;
        else count=1;
        b[i]=count;
        if(max<count) max=count;
    }
    count=1;
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]) count++;
        else count=1;
        c[i]=count;
        if(max<count) max=count;
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>=a[i+1]){
            if(i>0 && a[i-1]<a[i+1] && max<b[i-1]+c[i+1]) max=b[i-1]+c[i+1];
            if(i<n-2 && a[i]<a[i+2] && max<b[i]+c[i+2]) max=b[i]+c[i+2];
        }
    }
    printf("%d\n",max);
}