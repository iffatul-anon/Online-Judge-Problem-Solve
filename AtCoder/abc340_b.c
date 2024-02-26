#include<stdio.h>
int main(){
    int q,n,x,a[1000],y=0;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&n,&x);
        if(n==1) a[y++]=x;
        else printf("%d\n",a[y-x]);
    }
}