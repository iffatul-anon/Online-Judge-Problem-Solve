#include<stdio.h>
#include<math.h>
int main(){
    double m,n,i,a;
    scanf("%lf %lf",&m,&n);
    a=m;
    for(i=1;i<m;i++){
        a-=pow(i/m,n);
    }
    printf("%lf\n",a);
}