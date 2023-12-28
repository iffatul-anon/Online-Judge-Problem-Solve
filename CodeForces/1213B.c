#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n],c=0,min;
        for(int j=0;j<n;j++) scanf("%d",&a[j]);
        min=a[n-1];
        for(int i=n-1;i>=0;i--){
            if(a[i]<=min) min=a[i];
            else c++;
        }
        printf("%d\n",c);
    }
}