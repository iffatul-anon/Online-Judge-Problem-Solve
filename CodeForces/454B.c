#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],c=n,f=0;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            c=i;
            break;
        }
    }
    for(int i=c+1;i<n;i++){
        if(a[i-1]>a[i]){
            f=1;
            break;
        }
    }
    if(f==1 || (a[0]<a[n-1] && c<n)) printf("-1\n");
    else printf("%d\n",n-c);
}