#include<stdio.h>
int main(){
    while(1){
        double a,b;
        int x;
        while(1){
            scanf("%lf",&a);
            if(a>=0 && a<=10){
                break;
            }
            printf("nota invalida\n");
        }
        while(1){
            scanf("%lf",&b);
            if(b>=0 && b<=10){
                break;
            }
            printf("nota invalida\n");
        }
        printf("media = %.2lf\n",(a+b)/2);
        while(1){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&x);
            if(x==2){
                return 0;
            }
            if(x==1){
                break;
            }
        }
    }
}