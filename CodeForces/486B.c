#include<stdio.h>
int main(){
    int m,n,flag=0;
    scanf("%d %d",&m,&n);
    int mn[m][n],mna[m][n],mnb[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            mna[i][j]=1;
            mnb[i][j]=0;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mn[i][j]);
            if(mn[i][j]==0){
                for(int x=0;x<m;x++) mna[x][j]=0;
                for(int x=0;x<n;x++) mna[i][x]=0;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mna[i][j]==1){
                for(int x=0;x<m;x++) mnb[x][j]=1;
                for(int x=0;x<n;x++) mnb[i][x]=1;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mn[i][j]!=mnb[i][j]){
                flag=1;
                break;
            }
        }
        if(flag==1) break;
    }
    if(flag==1) printf("NO\n");
    else{
        printf("YES\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                printf("%d ",mna[i][j]);
            }
            printf("\n");
        }
    }
}