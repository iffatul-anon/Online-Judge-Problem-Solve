#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=1,i=1;
    int count=0;
    while(n!=0){
        sum=sum*i;
        if(sum>=n){
            count++;
            if(sum>n){
                sum=sum/i;
            }
            n=n-sum;
            i=0;
            sum=1;
        }
        i++;
    }
    printf("%d\n",count);
}