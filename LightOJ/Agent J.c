#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        double r1,r2,r3;
        scanf("%lf %lf %lf",&r1,&r2,&r3);
        double s=(r1+r2+r3);
        double a=r1+r2,b=r2+r3,c=r3+r1;
        double area=sqrt((s*(s-a)*(s-b)*(s-c)));
        double x1=((a*a)+(c*c)-(b*b))/(2*a*c);
        double x2=((a*a)+(b*b)-(c*c))/(2*a*b);
        double x3=((b*b)+(c*c)-(a*a))/(2*b*c);
        x1=acos(x1);
        x2=acos(x2);
        x3=acos(x3);
        double area1=.5*r1*r1*x1;
        double area2=.5*r2*r2*x2;
        double area3=.5*r3*r3*x3;
        printf("Case %d: %.10lf\n",i,area-area1-area2-area3);
    }
    return 0;
}