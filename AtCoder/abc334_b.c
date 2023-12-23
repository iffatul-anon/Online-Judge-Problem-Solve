#include<stdio.h>
int main(){
    long long a,m,l,r,c,x,y,z;
    scanf("%lld %lld %lld %lld",&a,&m,&l,&r);
    if(a<=l){
        x=l-a;
        y=r-a;
        if(x%m==0) x=(x/m)-1;
        else x=x/m;
        y=y/m;
        c=y-x;
    }
    else if(a>=r){
        x=a-l;
        y=a-r;
        if(y%m==0) y=(y/m)-1;
        else y=y/m;
        x=x/m;
        c=x-y;
    }
    else{
        x=a-l;
        y=r-a;
        x=x/m;
        y=y/m;
        c=x+y+1;
    }
    printf("%lld\n",c);
}