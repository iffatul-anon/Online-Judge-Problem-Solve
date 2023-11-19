#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        double v1,v2,v3,a1,a2;
        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);
        double t1,t2,d1,d2,d3;
        t1=v1/a1;
        t2=v2/a2;
        // d1=(v1*t1)-(.5*a1*t1*t1);
        // d2=(v2*t2)-(.5*a2*t2*t2);
        d1=(v1*v1)/(2*a1);
        d2=(v2*v2)/(2*a2);
        if(t1>t2){
            d3=v3*t1;
        }
        else{
            d3=v3*t2;
        }
        printf("Case %d: %.10lf %.10lf\n",i,d1+d2,d3);
    }
    return 0;
}