#include<stdio.h>
int main(){
    int tc;
    scanf("%d",&tc);
    while(tc--){
        long long n,p,l,t,x,y,z,a,b;
        scanf("%lld %lld %lld %lld",&n,&p,&l,&t);
        x=n/7;
        if(n%7!=0) x++;
        y=(x*t)+(((x+1)/2)*l);
        b=(x+1)/2;
        if(y<=p){
            z=p-y;
            a=z/l;
            if(z%l!=0) a++;
            b+=a;
        }
        else{
            z=y-p;
            if(x%2==0){
                a=z/(t+t+l);
                b-=a;
            }
            else{
                if(z>=t+l) {
                    z-=t+l;
                    b--;
                    a=z/(t+t+l);
                    b-=a;
                }
            }
        }
        printf("%lld\n",n-b);
    }
}