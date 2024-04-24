#include<stdio.h>
int main(){
    int n,f=0;
    scanf("%d",&n);
    for(int i=2;i*i<=n;i++) if(n%i==0) f=1;
    if(n==2) printf("4\n");
    else if(f) printf("%d\n",n);
    else printf("%d\n",n+1);
}