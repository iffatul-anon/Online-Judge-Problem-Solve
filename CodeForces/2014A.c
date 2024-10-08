#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,k,sum=0,a,c=0;
        scanf("%lld %lld",&n,&k);
        for(int i=0;i<n;i++){
            scanf("%lld",&a);
            if(a>=k) sum+=a;
            if(a==0 && sum>0){
                sum--;
                c++;
            }
        }
        printf("%lld\n",c);
    }
}