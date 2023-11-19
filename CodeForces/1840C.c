#include<stdio.h>
#include<string.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,k,q,a,c=0,p,sum=0;
        scanf("%lld %lld %lld",&n,&k,&q);
        for(int i=0;i<n;i++){
            scanf("%lld",&a);
            if(a<=q) c++;
            else{
                p=(c-k)+1;
                if(p>0) sum+=(p*(p+1))/2;
                c=0;
            }
        }
        if(a<=q){
            p=(c-k)+1;
            if(p>0) sum+=(p*(p+1))/2;
        }
        printf("%lld\n",sum);
    }
}