#include<stdio.h>
int main(){
    int t,w,x,y,z;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d %d",&w,&x,&y,&z);
        printf("%d\n",w+(x*z)-(y*z));
    }
    return 0;
}