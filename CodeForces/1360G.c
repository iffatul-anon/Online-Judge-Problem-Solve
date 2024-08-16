#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,m,a,b,f=1,c=0,x=0,y=0;
        scanf("%lld %lld %lld %lld",&n,&m,&a,&b);
        int ar[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ar[i][j]=0;
            }
        }
        if(n*a==m*b){
            for(int i=0;i<n;i++){
                for(int j=0;j<c+a-m;j++) ar[i][j]=1;
                for(int j=c;j<c+a && j<m;j++) ar[i][j]=1;
                c=(c+m-a)%m;
            }
            printf("YES\n");
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    printf("%lld",ar[i][j]);
                }
                printf("\n");
            }
        }
        else printf("NO\n");
    }
}