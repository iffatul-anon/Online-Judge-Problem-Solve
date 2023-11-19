#include<stdio.h>
int main(){
    int t,x;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&x);
        if(x<=50){
            printf("LEFT\n");
        }
        else{
            printf("RIGHT\n");
        }
    }
    return 0;
}