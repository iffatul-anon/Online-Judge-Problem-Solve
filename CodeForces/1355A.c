#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        unsigned long long a,k,min=10,max=0,x;
        scanf("%llu %llu",&a,&k);
        x=a;
        while(x>0){
            if(min>x%10) min=x%10;
            if(max<x%10) max=x%10;
            x=x/10;
        }
        k--;
        while(min && k--){
            x=a=a+min*max;
            min=9;
            max=0;
            while(x>0){
                if(min>x%10) min=x%10;
                if(max<x%10) max=x%10;
                x=x/10;
            }
        }
        printf("%llu\n",a);
    }
}