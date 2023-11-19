#include<stdio.h>
int main(){
    int t,a,b;
    scanf("%d",&t);
    a=t/3600;
    t=t%3600;
    b=t/60;
    t=t%60;
    printf("%d:%d:%d\n",a,b,t); 
}