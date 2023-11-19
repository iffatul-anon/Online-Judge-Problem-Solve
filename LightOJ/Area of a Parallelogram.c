#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int x1,y1,x2,y2,x3,y3,x4,y4;
        scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
        x4=x1+x3-x2;
        y4=y1+y3-y2;
        int a=.5*(((x1*y2)+(x2*y3)+(x3*y4)+(x4*y1))-((y1*x2)+(y2*x3)+(y3*x4)+(y4*x1)));
        if(a<0){
            a=a*-1;
        }
        printf("Case %d: %d %d %d\n",i,x4,y4,a);
    }
    return 0;
}