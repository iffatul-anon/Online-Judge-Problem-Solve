#include<stdio.h>
#include<math.h>
int main(){
    double a,b;
    while(EOF!=scanf("%lf %lf",&a,&b)){
        double x=a/(3.14*(b/2)*(b/2));
        double y=3.14*(b/2)*(b/2);
        printf("ALTURA = %.2lf\n",x);
        printf("AREA = %.2lf\n",y);
    }
    return 0;
}