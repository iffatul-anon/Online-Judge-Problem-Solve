#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        printf("Case %d:\n",i);
        int x1,x2,y1,y2,x,y,m;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        scanf("%d",&m);
        for(int j=0;j<m;j++){
            scanf("%d %d",&x,&y);
            if(x>=x1 && x<=x2 && y>=y1 && y<=y2){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
    }
    return 0;
}