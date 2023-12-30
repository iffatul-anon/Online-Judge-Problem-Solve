#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,k,m=1;
        scanf("%lld %lld",&n,&k);
        long long b[n];
        for(int i=0;i<n;i++) {
            scanf("%lld",&b[i]);
            m=m*b[i];
        }
        if(2023%m==0){
            printf("YES\n");
            for(int i=1;i<k;i++) printf("1 ");
            printf("%lld\n",2023/m);
        }
        else printf("NO\n");
    }
}