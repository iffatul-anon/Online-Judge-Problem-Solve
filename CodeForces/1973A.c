#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int p1,p2,p3,sum=0;
        scanf("%d %d %d",&p1,&p2,&p3);
        if((p1+p2+p3)%2==1) printf("-1\n");
        else if(p1+p2<=p3) printf("%d\n",p1+p2);
        else{
            sum=((p1+p2)-p3)/2;
            p1-=sum;
            p2-=sum;
            sum+=p1+p2;
            printf("%d\n",sum);
        }
    }
} 