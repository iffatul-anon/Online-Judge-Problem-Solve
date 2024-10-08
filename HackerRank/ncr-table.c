#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    long long m[1001][1001];
    m[0][0]=m[1][0]=m[1][1]=1;
    for(int i=2;i<=1000;i++){
        m[i][0]=1;
        for(int j=1;j<i;j++){
            m[i][j]=(m[i-1][j-1]+m[i-1][j])%1000000000;
        }
        m[i][i]=1;
    }
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=0;i<=n;i++) printf("%d ",m[n][i]);
        printf("\n");
    }
}