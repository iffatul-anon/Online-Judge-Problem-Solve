#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int x1,y1,x2,y2,x3,y3,x4,y4,x,y;
        scanf("%d %d %d %d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4,&x,&y);
        if(y>=y1 && y<=y3 && x>=x1 && x<=x3){
            printf("1\n");
        }
        else{
            printf("0\n");
        }
    }
    return 0;
}