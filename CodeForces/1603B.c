#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long x,y,n;
        scanf("%lld %lld",&x,&y);
        if(x>y) printf("%lld\n",x+y);
        else printf("%lld\n",y-((y%x)/2));
    }
}
