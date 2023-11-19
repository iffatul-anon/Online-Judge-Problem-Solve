#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,x;
        scanf("%d %d %d",&n,&k,&x);
        if(k>n || k>x+1) printf("-1\n");
        else {
            long long a=(k*(k-1))/2;
            n=n-k;
            if(k==x) printf("%lld\n",a+(n*(x-1)));
            else printf("%lld\n",a+(n*x));
        }
    }
}