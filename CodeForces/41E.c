#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",(n/2)*(n-(n/2)));
    for(int i=1;i<=n/2;i++) for(int j=n/2+1;j<=n;j++) printf("%d %d\n",i,j);
}