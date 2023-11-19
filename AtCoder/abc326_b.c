#include<stdio.h>
int main(){
    int n,i,j,x,y,z;
    scanf("%d",&n);
    for(i=n;i<1000;i++){
        x=i%10;
        z=i/10;
        y=z%10;
        z=z/10;
        if(x==y*z) break;
    }
    printf("%d\n",i);
}