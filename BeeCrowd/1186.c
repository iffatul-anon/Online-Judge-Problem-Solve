#include<stdio.h>
int main(){
    double M[12][12],sum=0,average;
    char O;
    scanf("%c",&O);
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
        }
    }
   
    for(int i=11;i>=0;i--){
        for(int j=11;j>11-i;j--){
            sum=sum+M[i][j];
        }
    }
    if(O=='S'){
        printf("%.1lf\n",sum);
    }
    else if(O=='M'){
        average=sum/66;
        printf("%.1lf\n",average);
    }
    return 0;
}