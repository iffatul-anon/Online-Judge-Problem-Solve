#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,sum=0,x=0;
        scanf("%lld",&n);
        long long a[n][n],m[2][2*n];
        for(long long i=n-1;i>=0;i--){
            for(long long j=0;j<n;j++) a[i][j]=j+1;
            m[0][x]=1;
            m[1][x++]=i+1;
            for(long long j=0;j<n;j++) a[j][i]=j+1;
            m[0][x]=2;
            m[1][x++]=i+1;
        }
        for(int i=0;i<n;i++) for(int j=0;j<n;j++) sum+=a[i][j];
        printf("%lld %lld\n",sum,x);
        for(int i=0;i<x;i++){
            printf("%lld %lld ",m[0][i],m[1][i]);
            for(int j=1;j<=n;j++) printf("%lld ",j);
            printf("\n");
        }
    }
}