#include<stdio.h>
int main(){
    int t;
    while(EOF!=scanf("%d",&t)){
        double max=12;
        for(int i=1;i<=t;i++){
            double n;
            scanf("%lf",&n);
            if(max>n){
                max=n;
            }
        }
        printf("%.2lf\n",max);
    }
    return 0;
}