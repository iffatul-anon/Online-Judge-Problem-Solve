#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,m,k,sum=0;
        scanf("%lld %lld %lld",&n,&m,&k);
        int a[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        for(int i=0;i<n;i++){
            if(a[i]%m==0) {
                sum+=a[i]/m;
            }
            else{
                a[i]-=k;
                if(a[i]>m){
                    sum+=a[i]/m;
                }
            }
        }
        printf("%lld\n",sum);

    }
}