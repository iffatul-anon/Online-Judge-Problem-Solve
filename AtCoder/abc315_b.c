#include<stdio.h>
int main(){
    int m,sum=0,sum2=0,i;
    scanf("%d",&m);
    int a[m];
    for(i=0;i<m;i++) {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    sum=sum/2+1;
    for(i=0;i<m;i++){
        if(sum2+a[i]<sum) sum2+=a[i];
        else break;
    }
    sum2=sum-sum2;
    printf("%d %d\n",i+1,sum2);
}