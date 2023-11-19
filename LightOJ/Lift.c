#include<stdio.h>
#include<stdlib.h>
int main(){
    int t,a,b;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d",&a,&b);
        printf("Case %d: %d\n",i,abs(a-b)*4+a*4+19);
    }
    return 0;
}