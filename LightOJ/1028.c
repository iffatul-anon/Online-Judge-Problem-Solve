#include<stdio.h>
long long a[1000005]={0}, p[1000005],ind=0;
void sieve(){
    p[ind++]=2;
    for(long long i=3;i<=1000005;i+=2){
        if(a[i]==0){
            p[ind++]=i;
            if(i*i>1000005) continue;
            for(long long j=i*i;j<=1000005;j+=2*i){
                a[j]=1;
            }
        }
    }
}
int main(){
    sieve();
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        long long n,div=1,c;
        scanf("%lld",&n);
        for(int j=0;p[j]*p[j]<=n;j++){
            c=0;
            while(n%p[j]==0){
                c++;
                n/=p[j];
            }
            if(c>0) div*=c+1;
        }
        if(n>1) div*=2;
        printf("Case %d: %d\n",i,div-1);
    }
}