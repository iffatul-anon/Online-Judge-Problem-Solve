#include<stdio.h>
#include<math.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,a;
        scanf("%d %d",&n,&x);
        long long sum=0,max=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            sum+=a;
            max+=ceil((double)a/x);
        }
        printf("%lld %lld\n",(long long)ceil((double)sum/x),max);
    }
}