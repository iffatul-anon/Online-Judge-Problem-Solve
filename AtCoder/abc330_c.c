#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    long long d,x,y,z,min,min2,c=1000000;
    scanf("%lld",&d);
    min=d;
    x=sqrt(d);
    if(x*x==d) printf("0\n");
    else {
        if(llabs(((x+1)*(x+1))-d)<min) min=llabs(((x+1)*(x+1))-d);
        while(c--){
            y=d-(x*x);
            z=sqrt(y);
            if(z*z==y) min=0;
            else{
                min2=llabs((x*x)+(z*z)-d);
                z++;
                if(llabs((x*x)+(z*z)-d)<min2) min2=llabs((x*x)+(z*z)-d);
            }
            if(min2<min) min=min2;
            if(min==0) break;
            x--;
        }
        printf("%lld\n",min);
    }
}