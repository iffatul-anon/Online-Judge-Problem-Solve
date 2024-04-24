#include<stdio.h>
#include<math.h>
int main(){
    int n;
    double r,x1,x2,y1,y2,sum=0,x,y;
    scanf("%d %lf",&n,&r);
    scanf("%lf %lf",&x,&y);
    x1=x;
    y1=y;
    for(int i=1;i<n;i++){
        scanf("%lf %lf",&x2,&y2);
        sum+=sqrtl(powl(x1-x2,2)+powl(y1-y2,2));
        x1=x2;
        y1=y2;
    }
    sum+=sqrtl(powl(x1-x,2)+powl(y1-y,2))+(2*3.1415*r);
    printf("%0.2lf\n",sum); 
}