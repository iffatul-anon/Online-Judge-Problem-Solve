#include<stdio.h>
int main(){
    int sx,sy,tx,ty;
    scanf("%d %d %d %d",&sx,&sy,&tx,&ty);
    tx=tx-sx;
    ty=ty-sy;
    for(int i=1;i<=ty;i++) printf("U");
    for(int i=1;i<=tx;i++) printf("R");
    for(int i=1;i<=ty;i++) printf("D");
    for(int i=1;i<=tx;i++) printf("L");
    printf("L");
    for(int i=1;i<=ty;i++) printf("U");
    printf("UR");
    for(int i=1;i<=tx;i++) printf("R");
    printf("DR");
    for(int i=1;i<=ty;i++) printf("D");
    printf("DL");
    for(int i=1;i<=tx;i++) printf("L");
    printf("U\n");
}