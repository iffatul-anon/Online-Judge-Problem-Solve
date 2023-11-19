#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        int a[n][m],x=0,r=0,c=0;
        for(int i=0;i<n;i++){
            x=0;
            for(int j=0;j<m;j++){
                scanf("%d",&a[i][j]);
                if(a[i][j]==0) x++;
            }
            if(x==m) r++;
        }
        for(int i=0;i<m;i++){
            x=0;
            for(int j=0;j<n;j++){
                if(a[j][i]==0) x++;
            }
            if(x==n) c++;
        }
        if(c<r) r=c;
        if(r%2==0) printf("Vivek\n");
        else printf("Ashish\n");
    }
}