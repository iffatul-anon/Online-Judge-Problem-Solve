#include<stdio.h>
#include<math.h>
int main(){
    int n;
    while(EOF!=scanf("%d",&n)){
        int h,c,l;
        scanf("%d %d %d",&h,&c,&l);
        double x=sqrt(pow(h,2)+pow(c,2));
        x=x*n;
        printf("%.4lf\n",(x*l)/10000);
    }
}