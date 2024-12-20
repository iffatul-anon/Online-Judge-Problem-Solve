#include<stdio.h>
signed main() {
    int t,k,T;
    scanf("%d %d %d",&t,&k,&T);
    int c=k/t;
    if(k%t) c++;
    int x=T/(c*t);
    x++;
    printf("%d\n",x);
}