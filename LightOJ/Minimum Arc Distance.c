#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int x,y,x1,y1,x2,y2;
        scanf("%d %d %d %d %d %d",&x,&y,&x1,&y1,&x2,&y2);
        double r=sqrt(pow(x-x1,2)+pow(y-y1,2));
        double c=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        double teta =acos((pow(r,2)+pow(r,2)-pow(c,2))/(2*r*r));
        double anon=r*teta;
        printf("Case %d: %lf\n",i,anon);
    }
    return 0;
}