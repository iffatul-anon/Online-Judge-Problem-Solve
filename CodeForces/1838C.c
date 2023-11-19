#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        int x=m*(n/2)+1,y=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(i%2!=0) printf("%d ",x++);
                else printf("%d ",y++);
            }
            printf("\n");
        }
    }
    return 0;
}