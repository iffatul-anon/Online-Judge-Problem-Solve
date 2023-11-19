#include<stdio.h>
int main(){
    int c;
    scanf("%d",&c);
    while(c--){
        int n;
        scanf("%d",&n);
        int a[n];
        double sum=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        double count=0;
        double av=(double)sum/n;
        for(int i=0;i<n;i++){
            if(a[i]>av){
                count++;
            }
        }
        printf("%.3lf%%\n",(count/n)*100);
    }
    return 0;
}