#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,flag=0;
        scanf("%d %d",&n,&m);
        for(int i=2;i<=m/2;i++){
            if(m%i==0){
                flag=1;
                break;
            }
        }
        if(flag==1){
            int x=1;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                    printf("%d ",x++);
                }
                printf("\n");
            }
        }
        else{
            if(n==4){
                int x=m*2+1,y=1;
                for(int i=1;i<=n;i++){
                    for(int j=1;j<=m;j++){
                        if(i%2!=0) printf("%d ",x++);
                        else printf("%d ",y++);
                    }
                    printf("\n");
                }
            }
            else{
                int x=1,y=m+1;
                for(int i=1;i<=n;i++){
                    for(int j=1;j<=m;j++){
                        if((n+1)/2>=i){
                            printf("%d ",x++);
                            if(j==m) x=x+m;
                        }
                        else{
                            printf("%d ",y++);
                            if(j==m) y=y+m;
                        }
                    }
                    printf("\n");
                }
            }
        }
    }
    return 0;
}