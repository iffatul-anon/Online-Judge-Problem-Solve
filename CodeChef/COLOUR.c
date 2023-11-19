#include<stdio.h>
#include<stdlib.h>
int main(){
    int t,x,y,z;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&x,&y,&z);
        if(x==0 && y==0 && z==0){
            printf("0\n");
        }
        else if((x>=1 && y==0 && z==0) || (x==0 && y==0 && z>=1) || (x==0 && y>=1 && z==0)){
            printf("1\n");
        }
        else if((x==1 && y>=1 && z==0) || (x>=1 && y==1 && z==0) || (x==0 && y>=1 && z==1) || (x==0 && y==1 && z>=1) || (x>=1 && y==0 && z==1) || (x==1 && y==0 && z>=1)){
            printf("2\n");
        }
        else if((x>=1 && y==1 && z==1) || (x==1 && y>=1 && z==1) || (x==1 && y==1 && z>=1)){
            printf("3\n");
        }
        else if((x>=2 && y>=2 && z==0) || (x>=2 && y==0 && z>=2) || (x==0 && y>=2 && z>=2)){
            printf("3\n");
        }
        else if((x>=2 && y>=2 && z==1) || (x>=2 && y==1 && z>=2) || (x==1 && y>=2 && z>=2)){
            printf("4\n");
        }
        else if(x==2 && y==2 && z==2){
            printf("4\n");
        }
        else if((x>=3 && y==2 && z==2) || (x==2 && y==2 && z>=3) || (x==2 && y>=3 && z==2)){
            printf("5\n");
        }
        else if((x>=3 && y>=3 && z==2) || (x==2 && y>=3 && z>=3) || (x>=3 && y==2 && z>=3)){
            printf("5\n");
        }
        else if(x>=3 && y>=3 && z>=3){
            printf("6\n");
        }
    }
    return 0;
}