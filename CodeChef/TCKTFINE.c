#include<stdio.h>
int main(){
    int t,x,p,q;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&x,&p,&q);
        printf("%d\n",(p-q)*x);
    }
    return 0;
}

