#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n+1];
        for(int i=0;i<=n;i++) a[i]=0;
        for(int i=1;i<=n;i++){
            if(a[i]==1) continue;
            for(int j=i;j<=n;j=j*2){
                if(a[j]==0) printf("%d ",j);
                a[j]=1;
            }
        }
        printf("\n");
    }
}