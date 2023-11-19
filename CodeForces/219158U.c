#include<stdio.h>
int main(){
    double n;
    int n2=0;
    scanf("%lf",&n);
    n2=n;
    if(n==n2) printf("int %d\n",n2);
    else printf("float %d %lf\n",n2,n-n2);
}