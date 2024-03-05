#include<stdio.h>
long long a[100000005]={0}, p[100000005],ind=0;
void sieve(){
    long long i,j;
    p[ind++]=2;
    for(i=3;i<=100000005;i+=2){
        if(a[i]==0){
            p[ind++]=i;
            if(i*i>100000005) continue;
            for(j=i*i;j<=100000005;j+=2*i){
                a[j]=1;
            }
        }
    }
}
int main(){
    sieve();
    int t;
    scanf("%d",&t);
    while(t--){
        unsigned long n,x,y,sum=1,i,m;
        scanf("%llu",&n);
        m=n;
        for(i=0;i<ind && p[i]*p[i]<=n;i++){
            x=p[i];
            y=p[i];
            while(n%y==0){
                n/=y;
                x*=y;
            }
            sum=sum*((x-1)/(y-1));
        }
        if(n>1) sum=sum*(n+1);
        //if(n>1) sum=sum*(((n*n)-1)/(n-1)); // overflow
        printf("%llu\n",sum-m);
    }
} 