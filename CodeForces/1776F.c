#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,u,v,count=0,flag=0;
        scanf("%d %d",&n,&m);
        int a[m],b[m],c[100]={0};
        for(int i=0;i<m;i++){
            scanf("%d %d",&a[i],&b[i]);
            c[a[i]]++;
            c[b[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(c[i]<n-1){
                flag=i;
                break;
            }
        }
        if(n==3){
            printf("%d\n",m);
            for(int i=1;i<=m;i++) printf("%d ",i);
            printf("\n");
        }
        else{
            if(flag!=0){
                printf("2\n");
                for(int i=0;i<m;i++){
                    if(a[i]==flag || b[i]==flag) printf("2 ");
                    else printf("1 ");
                }
                printf("\n");
            }
            else{
                printf("3\n");
                for(int i=0;i<m;i++){
                    if((a[i]==n && b[i]==1) || (a[i]==1 && b[i]==n)) printf("3 ");
                    else if(a[i]==1 || b[i]==1) printf("1 ");
                    else printf("2 ");
                }
                printf("\n");
            }
        }
    }
}