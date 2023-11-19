#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int pa,pb;
        double g1,g2;
        scanf("%lld %lld %lf %lf",&pa,&pb,&g1,&g2);
        int count=0;
        while(pa<=pb){
            count++;
            pa=pa+((g1*pa)/100);
            pb=pb+((g2*pb)/100);
            if(count>100){
                break;
            }
        }
        if(count>100){
            printf("Mais de 1 seculo.\n");
        }
        else{
            printf("%d anos.\n",count);
        }
    }
}