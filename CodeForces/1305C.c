#include<stdio.h>
#include<stdlib.h>
int main(){
    long long n,m,ans=1;
    scanf("%lld %lld",&n,&m);
    long long a[n];
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    if(n>m) printf("0\n");
    else{
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                ans=(ans*llabs(a[i]-a[j])%m)%m;
            }
        }
        printf("%lld\n",ans);
    }
}