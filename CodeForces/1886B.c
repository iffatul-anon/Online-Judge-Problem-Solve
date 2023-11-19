#include<stdio.h>
#include<math.h>
double min(double x,double y){
    return x<y?x:y;
}
double max(double x,double y){
    return x>y?x:y;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        double px,py,ax,ay,bx,by,d,d2,d3,d4,d5;;
        scanf("%lf %lf %lf %lf %lf %lf",&px,&py,&ax,&ay,&bx,&by);
        d=sqrt(pow(ax-bx,2)+pow(ay-by,2))/2;
        d2=sqrt(pow(px-ax,2)+pow(py-ay,2));
        d3=sqrt(pow(px-bx,2)+pow(py-by,2));
        d4=sqrt(pow(ax,2)+pow(ay,2));
        d5=sqrt(pow(bx,2)+pow(by,2));
        if(d2<=d && d4<=d) printf("%.10lf\n",max(d2,d4));
        else if(d3<=d && d5<=d) printf("%.10lf\n",max(d3,d5));
        else if((d2<=d || d3<=d) && (d4<=d || d5<=d)) printf("%.10lf\n",d);
        else printf("%.10lf\n",max(min(d2,d3),min(d4,d5)));
    }
}