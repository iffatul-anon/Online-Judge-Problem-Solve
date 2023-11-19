#include<stdio.h>
int main(){
    int n,i,j,sum1,sum2;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    i=0;
    j=n-1;
    sum1=a[i];
    sum2=a[j];
    while(i<j-1){
        if(sum1<sum2){
            i++;
            sum2-=sum1;
            sum1=a[i];
        }
        else if(sum1>sum2){
            j--;
            sum1-=sum2;
            sum2=a[j];
        }
        else{
            i++;
            sum1=a[i];
            j--;
            sum2=a[j];
        }
    }
    printf("%d %d\n",i+1,n-i-1);
}