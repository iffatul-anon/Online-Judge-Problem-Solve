#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n,x1,y1,z1,x2,y2,z2;
        scanf("%d",&n);
        scanf("%d %d %d %d %d %d",&x1,&y1,&z1,&x2,&y2,&z2);
        int max_x=x1,min_x=x2,max_y=y1,min_y=y2,max_z=z1,min_z=z2;
        for(int i=1;i<n;i++){
            scanf("%d %d %d %d %d %d",&x1,&y1,&z1,&x2,&y2,&z2);
            if(max_x<x1){
                max_x=x1;
            }
            if(min_x>x2){
                min_x=x2;
            }
            if(max_y<y1){
                max_y=y1;
            }
            if(min_y>y2){
                min_y=y2;
            }
            if(max_z<z1){
                max_z=z1;
            }
            if(min_z>z2){
                min_z=z2;
            }
        }
        if(max_x>=min_x || max_y>=min_y || max_z>=min_z){
            printf("Case %d: 0\n",i);
        }
        else{
            printf("Case %d: %d\n",i,(min_x-max_x)*(min_y-max_y)*(min_z-max_z));
        }
    }
    return 0;
}