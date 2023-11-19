#include<stdio.h>
int main(){
    int n,m,k,c,r,x;
    scanf("%d %d %d",&n,&m,&k);
    int a[n][m];
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) scanf("%d",&a[i][j]);
    for(int i=0;i<k;i++){
        scanf("%d",&c);
        c--;
        r=0;
        while(r<n){
            x=a[r][c];
            a[r][c]=2;
            if(x==1) c++;
            else if(x==3) c--;
            else r++;
        }
        printf("%d ",c+1);
    }
}