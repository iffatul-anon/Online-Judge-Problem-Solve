#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,sum=0,x;
        scanf("%lld",&n);
        for(int i=0;i<n;i++){
            scanf("%lld",&x);
            sum+=x;
        }
        x=sqrtl(sum);
        if(sum==(x*x)) printf("YES\n");
        else printf("NO\n");
    }
}