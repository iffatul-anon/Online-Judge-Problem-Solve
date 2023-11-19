#include<stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,k,g,total,x,y,z;
        scanf("%lld %lld %lld",&n,&k,&g);
        total=k*g;
        x=(n*((g-1)/2));
        y=(total-x)%g;
        z=(y+((g-1)/2))%g;
        if(total<=x) printf("%lld\n",total);
        else if(y==0) printf("%lld\n",x);
        else if(z*2<g) printf("%lld\n",x+z-(g-1)/2);
        else printf("%lld\n",x-(g-z)-(g-1)/2);
    }
}