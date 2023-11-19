#include <stdio.h>
int main() {
    int n,m,x,max=0,min1=10000,min2=10000;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(x<min1) min1=x;
        if(x>max) max=x;
    }
    for(int i=0;i<m;i++){
        scanf("%d",&x);
        if(x<min2) min2=x;
    }
    if(min1*2>max) max=min1*2;
    if(max<min2) printf("%d\n",max);
    else printf("-1\n");
}