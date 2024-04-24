#include<stdio.h>
#include<math.h>
int main(){
    double xr,yr,xw,yw,r,w;
    scanf("%lf %lf %lf %lf",&xr,&yr,&xw,&yw);
    r=sqrtl((xr*xr)+(yr*yr));
    w=sqrtl((xw*xw)+(yw*yw));
    if(r<w) printf("Russo\n");
    else if(r==w) printf("Empate\n");
    else printf("Wil\n");
}