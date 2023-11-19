#include <stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        double r;
        scanf("%lf", &r);
        printf("Case %d: %0.2lf\n",i,(4*r*r)-(2*r*r*acos(0.0)));
    }
}