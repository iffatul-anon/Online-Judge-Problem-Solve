#include<stdio.h>
int main(){
    int n,m,x,max=0,sum=0;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(max<x) max=x;
        sum+=x;
    }
    sum+=m;
    if(sum%n==0) sum=sum/n;
    else sum=sum/n+1;
    if(sum<max) sum=max;
    printf("%d %d\n",sum,max+m);
}