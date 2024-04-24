#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n],x=1;
    for(int k=n-1;k>=0;k--){
        int i=0,j=k;
        while(i<n && j<n){
            a[i][j]=x++;
            i++;
            j++;
        }
    }
    for(int k=1;k<n;k++){
        int i=k,j=0;
        while(i<n && j<n){
            a[i][j]=x++;
            i++;
            j++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}