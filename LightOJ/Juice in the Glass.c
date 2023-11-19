#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int r1,r2,h,p;
        scanf("%d %d %d %d",&r1,&r2,&h,&p);
        long double v,r3;
        r3=(p*((r1-r2)/h))+r2;
        v=((2*acos(0.0))/3)*p*((r2*r2)+(r3*r3)+(r2*r3));
        printf("Case %d: %.10Lf\n",i,v);
    }
    return 0;
}