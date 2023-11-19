#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,x,count=0,sum=0;
        scanf("%lld",&n);
        for(int i=0;i<n;i++){
            scanf("%lld",&x);
            if(x==1) count++;
            else sum+=x-1;
        }
        if(n==1 || sum<count) printf("NO\n");
        else printf("YES\n");
    }
}