#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if((x<y && y-x<3) || (x>y && x-y<4)) printf("Yes\n");
    else printf("No\n");
}