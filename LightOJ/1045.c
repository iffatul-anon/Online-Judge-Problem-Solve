#include <stdio.h>
#include<math.h>
double a[1000001];
void factdigits(){
    a[0]=0;
    for(int i=1;i<=1000001;i++) a[i]=a[i-1]+log(i);
}
int main() {
    factdigits();
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        long long n,b,d;
        scanf("%lld %lld",&n,&b);
        d=(a[n]/log(b))+1;
        printf("Case %d: %lld\n",i,d);
    }
}
