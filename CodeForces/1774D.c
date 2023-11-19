#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,c=0,x,y,z=0,i,j,k;
        scanf("%d %d",&n,&m);
        int a[n][m],b[n];
        for(i=0;i<n;i++){
            b[i]=0;
            for(j=0;j<m;j++){
                scanf("%d",&a[i][j]);
                b[i]+=a[i][j];
                if(a[i][j]==1) c++;
            }
        }
        if(c%n==0){
            x=c/n;
            for(i=0;i<n;i++){
                y=0;
                for(j=0;j<m;j++){
                    if(a[i][j]==1) y++;
                }
                z+=abs(x-y);
            }
            printf("%d\n",z/2);
            for(i=0;i<m;i++){
                j=0;
                k=0;
                while(j<n && k<n){
                    while(b[j]<=x && j<n) j++;
                    while(b[k]>=x && k<n) k++;
                    if(j==n || k==n) break;
                    if(a[j][i]==1 && a[k][i]==0){
                        printf("%d %d %d\n",j+1,k+1,i+1);
                        b[j++]--;
                        b[k++]++;
                    }
                    else if(a[j][i]==1 && a[k][i]==1) k++;
                    else if(a[j][i]==0 && a[k][i]==0) j++;
                    else if (a[j][i]==0 && a[k][i]==1){
                        j++;
                        k++;
                    }
                }
            }
        }
        else printf("-1\n");
    }
}