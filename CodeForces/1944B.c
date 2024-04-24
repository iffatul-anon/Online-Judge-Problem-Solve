#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n],b[n],c[n+1],d[n+1],x=0,e[n+1],y,z;
        for(int i=0;i<=n;i++){
            c[i]=0;
            d[i]=0;
        }
        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
            c[a[i]]++;
        }
        for(int i=0;i<n;i++) {
            scanf("%d",&b[i]);
            d[b[i]]++;
            if(c[b[i]]) e[x++]=b[i];
        }
        if(x>=2*k){
            for(int i=0;i<2*k;i++) printf("%d ",e[i]);
            printf("\n");
            for(int i=0;i<2*k;i++) printf("%d ",e[i]);
            printf("\n");
        }
        else{
            if(x%2) x--;
            y=2*k-x;
            z=2*k-x;
            for(int i=0;i<x;i++) printf("%d ",e[i]);
            for(int i=0;i<=n;i++){
                if(c[i]==2){
                    printf("%d %d ",i,i);
                    y-=2;
                }
                if(y==0) break;
            }
            printf("\n");
            for(int i=0;i<x;i++) printf("%d ",e[i]);
            for(int i=0;i<=n;i++){
                if(d[i]==2){
                    printf("%d %d ",i,i);
                    z-=2;
                }
                if(z==0) break;
            }
            printf("\n");
        }
    }
}