#include <stdio.h>
int main(){
    int n,m,p,c=0;
    scanf("%d %d %d",&n,&m,&p);
    if(m<=n) {
        n=n-m;
        c=n/p+1;
    }
    printf("%d\n",c);
}