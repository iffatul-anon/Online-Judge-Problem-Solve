#include<stdio.h>
int main(){
    int n,n2,m,x,y,flag=0;
    scanf("%d %d",&n,&m);
    n2=n+1;
    int a[n+1][n+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++) {
            if(i==j) a[i][j]=1;
            else a[i][j]=0;
        }
    }
    for(int i=0;i<m;i++){
        scanf("%d %d",&x,&y);
        a[x][y]=1;
        a[y][x]=1;
    }
    while(n2--){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i][j]==1){
                    for(int k=j+1;k<=n;k++){
                        if(a[i][k]==1){
                            a[j][k]=1;
                            a[k][j]=1;
                        }
                    }
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) {
            if(a[i][j]==0) flag=1;
        }
    }
    if(flag==0 && n==m) printf("FHTAGN!\n");
    else printf("NO\n");
}