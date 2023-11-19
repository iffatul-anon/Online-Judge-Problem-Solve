#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,mex;
        scanf("%d %d",&n,&k);
        int a[n],b[n+1];
        for(int i=0;i<=n;i++) b[i]=0;
        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
            b[a[i]]=1;
        }
        for(int i=0;i<=n;i++){
            if(b[i]==0) {
                mex=i;
                break;
            }
        }
        k=k%(n+1);
        if(k==0){
            for(int i=0;i<n;i++) printf("%d ",a[i]);
            printf("\n");
        }
        else{
            for(int i=n-k+1;i<n;i++) printf("%d ",a[i]);
            printf("%d ",mex);
            for(int i=0;i<n-k;i++) printf("%d ",a[i]);
            printf("\n");
        }
    }
}