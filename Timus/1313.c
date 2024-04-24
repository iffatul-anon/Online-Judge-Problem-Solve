#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int k=0;k<n;k++){
        int i=k,j=0;
        while(i>=0 && j<n){
            printf("%d ",a[i][j]);
            i--;
            j++;
        }
    }
    for(int k=1;k<n;k++){
        int i=n-1,j=k;
        while(i>=0 && j<n){
            printf("%d ",a[i][j]);
            i--;
            j++;
        }
    }
}