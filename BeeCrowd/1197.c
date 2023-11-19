#include<stdio.h>
int main(){
    int v,t;
    while(EOF!=scanf("%d %d",&v,&t)){
        printf("%d\n",v*t*2);
    }
    return 0;
}