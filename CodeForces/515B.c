#include <stdio.h>
int main(){
    int n,m,x,y,a[10000]={0},b[10000]={0},flag=0;
    scanf("%d %d",&n,&m);
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        scanf("%d",&y);
        a[y]=1;
    }
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        scanf("%d",&y);
        b[y]=1;
    }
    for(int i=0;i<10000;i++){
        if(a[i%n]==1 || b[i%m]==1){
            a[i%n]=1;
            b[i%m]=1;
        }
    }
    for(int i=0;i<n;i++) if(a[i]==0) flag=1;
    for(int i=0;i<m;i++) if(b[i]==0) flag=1;
    if(flag==1) printf("NO\n");
    else printf("YES\n");
}