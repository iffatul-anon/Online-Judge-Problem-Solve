#include <stdio.h>
int main(){
    int x,y;
    while(EOF!=scanf("%d %d",&x,&y)){
        int a=y-x;
        if(x%a==0){
            printf("%d\n",x/a+1);
        }
        else{
            printf("%d\n",x/a+2);
        }
    }
    return 0;
}