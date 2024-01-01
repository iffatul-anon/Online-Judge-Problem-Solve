#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int k,n,m,c=0,f=0,x=0,y=0;
        scanf("%d %d %d",&k,&n,&m);
        int a[n],b[m],ab[n+m],xy=0;
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        for(int i=0;i<m;i++) scanf("%d",&b[i]);
        while(x<n && y<m){
            if(a[x]==0){
                ab[xy++]=a[x];
                x++;
            }
            else if(b[y]==0){
                ab[xy++]=b[y];
                y++;
            }
            else if(a[x]<b[y]){
                ab[xy++]=a[x];
                x++;
            }
            else{
                ab[xy++]=b[y];
                y++;
            }
        }
        while(x<n) ab[xy++]=a[x++];
        while(y<m) ab[xy++]=b[y++];
        for(int i=0;i<n+m;i++){
            if(ab[i]>k){
                f=1;
                break;
            }
            if(ab[i]==0) k++;
        }

        if(f==1) printf("-1\n");
        else {
            for(int i=0;i<n+m;i++) printf("%d ",ab[i]);
            printf("\n");
        }
    }
}