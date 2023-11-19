#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,a,sum=0;
        scanf("%lld", &n);
        for(int i=0;i<n;i++){
            scanf("%lld",&a);
            sum+=a;
        }
        printf("%lld\n",sum/n);
    }
}