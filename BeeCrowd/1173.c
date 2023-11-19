#include<stdio.h>
int main(){
    int v,N[10],i;
    scanf("%d",&v);
    for(i=0;i<10;i++){
        N[i]=v;
        printf("N[%d] = %d\n",i,N[i]);
        v=v*2;
    }
    return 0;
}