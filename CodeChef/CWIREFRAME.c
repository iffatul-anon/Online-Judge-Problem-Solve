#include<stdio.h>
int main(){
    int t,n,m,x;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&n,&m,&x);
        printf("%d\n",((n*2)+(m*2))*x);
    }
    return 0;
}