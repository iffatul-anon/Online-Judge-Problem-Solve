#include<stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    long long a[n][n],dp[n][n];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%lld",&a[i][j]);
    dp[0][0]=0;
    for(int i=1;i<n;i++){
        if(a[0][i]==-1 || dp[0][i-1]==-1) dp[0][i]=-1;
        else dp[0][i]=dp[0][i-1]+a[0][i];
    }
    for(int i=1;i<n;i++){
        if(a[i][0]==-1 || dp[i-1][0]==-1) dp[i][0]=-1;
        else dp[i][0]=dp[i-1][0]+a[i][0];
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(a[i][j]==-1 || (dp[i-1][j]==-1 && dp[i][j-1]==-1)) dp[i][j]=-1;
            else if(dp[i-1][j]>dp[i][j-1]) dp[i][j]=dp[i-1][j]+a[i][j];
            else dp[i][j]=dp[i][j-1]+a[i][j];
        }
    }
    printf("%lld\n",dp[n-1][n-1]);
}