#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b,count=0,min=1000000000,x,y,z,i=10;
        scanf("%lld %lld",&a,&b);
        y=b;
        if(y==1) y++;
        while(i--){
            x=a;
            while(x>0){
                count++;
                x=x/y;
            }
            z=count+(y-b);
            if(min>z) min=z;
            y++;
            count=0;
        }
        printf("%lld\n",min);
    }
}