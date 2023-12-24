#include<stdio.h>
int main(){
    int n,k,k2,f=0,a[22],x=0;
    scanf("%d %d",&n,&k);
    k2=k;
    while(k--){
        f=0;
        if(k==0){
            a[x++]=n;
            break;
        }
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                n/=i;
                a[x++]=i;
                f=1;
                break;
            }
        }
        if(f==0) {
            a[x++]=n;
            break;
        }
    }
    if(x==k2){
        for(int i=0;i<x;i++) printf("%d ",a[i]);
        printf("\n");
    }
    else printf("-1\n");
}