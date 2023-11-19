#include<stdio.h>
int main(){
    int t,x,y,z;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&x,&y,&z);
        printf("%d\n",x*4+y*2);
    }
    return 0;
}