#include<stdio.h>
int main(){
    int t,a,b,x,y;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d %d",&a,&x,&b,&y);
        float ax=(float)a/x;
        float by=(float)b/y;
        if(ax>by){
            printf("Alice\n");
        }
        else if(ax<by){
            printf("Bob\n");
        }
        else if(ax==by){
            printf("Equal\n");
        }
    }
    return 0;
}