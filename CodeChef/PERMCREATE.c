#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        if(n<=3){
            printf("-1\n");
        }
        else if(n==4){
            printf("2 4 1 3\n");
        }
        else{
            for(int j=1;j<=n;j=j+2){
                printf("%d ",j);
            }
            for(int j=2;j<=n;j=j+2){
                printf("%d ",j);
            }
            printf("\n");
        }
    }
    return 0;
}