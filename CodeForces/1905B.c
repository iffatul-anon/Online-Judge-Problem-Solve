#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,u,v,c=0;
        scanf("%d",&n);
        int a[n+1];
        for(int i=0;i<=n;i++) a[i]=-1;
        for(int i=1;i<n;i++){
            scanf("%d %d",&u,&v);
            a[u]++;
            a[v]++;
        }
        for(int i=1;i<=n;i++) if(a[i]==0) c++;
        printf("%d\n",(c+1)/2);
    }
}