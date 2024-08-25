#include<stdio.h>
#define int long long
signed main(){
    int n,k,c=0,x=0,sum=0;
    scanf("%lld %lld",&n,&k);
    int a[n];
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    for(int i=0;i<n;i++){
        sum+=a[i];
        while(sum>=k){
            c+=n-i;
            sum-=a[x++];
        }
    }
    printf("%lld\n",c);
}
