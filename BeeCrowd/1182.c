#include<stdio.h>
int main(){
    double M[12][12],sum=0,average;
    int L;
    char T;
    scanf("%d %c",&L,&T);
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
        }
    }
   
    for(int i=0;i<12;i++){
        sum=sum+M[i][L];
    }
    if(T=='S'){
        printf("%.1lf\n",sum);
    }
    else if(T=='M'){
        average=sum/12;
        printf("%.1lf\n",average);
    }
    return 0;
}