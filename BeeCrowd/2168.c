#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1][n+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            if((a[i][j]+a[i][j-1]+a[i-1][j]+a[i-1][j-1])>=2){
                printf("S");
            }
            else{
                printf("U");
            }
        }
        printf("\n");
    }

    return 0;
}