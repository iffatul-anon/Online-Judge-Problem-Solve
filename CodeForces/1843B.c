#include<stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,a,sum=0,count=0,flag=0;
        scanf("%lld",&n);
        for(int i=0;i<n;i++){
            scanf("%lld",&a);
            if(a==0) continue;
            if(a>0){
                sum+=a;
                if(flag==1){
                    flag=0;
                    count++;
                }
            }
            else{
                flag=1;
                sum+=-a;
            }
        }
        if(flag==1) count++;
        printf("%lld %lld\n",sum,count);
    }
}