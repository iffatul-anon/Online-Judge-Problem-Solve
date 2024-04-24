#include<stdio.h>
#include<math.h>
int main(){
    int n,sum1,sum2,x,c=1;
    scanf("%d",&n);
    if(n==2) c=10;
    else if(n==4){
        for(int i=100;i<1000;i++){
            x=i;
            sum1=x%10;
            x/=10;
            sum1+=x%10;
            x/=10;
            sum2=x;
            if(sum1==sum2) c++;
        }
        for(int i=1000;i<10000;i++){
            x=i;
            sum1=x%10;
            x/=10;
            sum1+=x%10;
            x/=10;
            sum2=x%10;
            x/=10;
            sum2+=x;
            if(sum1==sum2) c++;
        }
    }
    else if(n==6){
        for(int i=1000;i<10000;i++){
            x=i;
            sum1=x%10;
            x/=10;
            sum1+=x%10;
            x/=10;
            sum1+=x%10;
            x/=10;
            sum2=x;
            if(sum1==sum2) c++;
        }
        for(int i=10000;i<100000;i++){
            x=i;
            sum1=x%10;
            x/=10;
            sum1+=x%10;
            x/=10;
            sum1+=x%10;
            x/=10;
            sum2=x%10;
            x/=10;
            sum2+=x;
            if(sum1==sum2) c++;
        }
        for(int i=100000;i<1000000;i++){
            x=i;
            sum1=x%10;
            x/=10;
            sum1+=x%10;
            x/=10;
            sum1+=x%10;
            x/=10;
            sum2=x%10;
            x/=10;
            sum2+=x%10;
            x/=10;
            sum2+=x;
            if(sum1==sum2) c++;
        }
    }
    else if(n==8){
        for(int i=10000;i<100000;i++){
            x=i;
            sum1=x%10;
            x/=10;
            sum1+=x%10;
            x/=10;
            sum1+=x%10;
            x/=10;
            sum1+=x%10;
            x/=10;
            sum2=x;
            if(sum1==sum2) c++;
        }
        for(int i=100000;i<1000000;i++){
            x=i;
            sum1=x%10;
            x/=10;
            sum1+=x%10;
            x/=10;
            sum1+=x%10;
            x/=10;
            sum1+=x%10;
            x/=10;
            sum2=x%10;
            x/=10;
            sum2+=x;
            if(sum1==sum2) c++;
        }
        for(int i=1000000;i<10000000;i++){
            x=i;
            sum1=x%10;
            x/=10;
            sum1+=x%10;
            x/=10;
            sum1+=x%10;
            x/=10;
            sum1+=x%10;
            x/=10;
            sum2=x%10;
            x/=10;
            sum2+=x%10;
            x/=10;
            sum2+=x;
            if(sum1==sum2) c++;
        }
        for(int i=10000000;i<100000000;i++){
            x=i;
            sum1=x%10;
            x/=10;
            sum1+=x%10;
            x/=10;
            sum1+=x%10;
            x/=10;
            sum1+=x%10;
            x/=10;
            sum2=x%10;
            x/=10;
            sum2+=x%10;
            x/=10;
            sum2+=x%10;
            x/=10;
            sum2+=x;
            if(sum1==sum2) c++;
        }
    }
    printf("%d\n",c);
}