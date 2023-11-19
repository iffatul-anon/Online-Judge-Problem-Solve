#include<stdio.h>
int main(){
    int t,n,x;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&x);
        if(n-x<x){
            printf("%d\n",n-x);
        }
        else{
            printf("%d\n",x);
        }
    }
}