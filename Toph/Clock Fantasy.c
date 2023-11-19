#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        double x,y;
        scanf("%lf %lf",&x,&y);
        printf("%0.10lf\n",.5*x*y);
    }
}