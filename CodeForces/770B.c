#include<stdio.h>
int main(){
    long long x,x2,a[20],l=0,i,j,max=0;
    scanf("%lld",&x);
    if(x<10) printf("%lld\n",x);
    else{
        x2=x;
        while(x2>0){
            a[l++]=x2%10;
            x2=x2/10;
        }
        for(i=0;i<l;i++){ 
            x2=a[l-1];
            for(j=l-2;j>=0;j--){
                if(j==i) x2=x2*10+8;
                else x2=x2*10+9;
            }
            if(max<x2 && x2<=x) max=x2;
        }
        x2=a[l-1]-1;
        for(j=1;j<l;j++) x2=x2*10+9;
        if(max<x2) max=x2;
        printf("%lld\n",max);
    }
}