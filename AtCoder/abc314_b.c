#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int c[n];
    int m[n][100];
    for(int i=0;i<n;i++){
        scanf("%d",&c[i]);
        for(int j=0;j<c[i];j++) scanf("%d",&m[i][j]);
    }
    int x;
    scanf("%d",&x);
    int a[100],y=0,min=100;
    for(int i=0;i<n;i++){
        for(int j=0;j<c[i];j++){
            if(m[i][j]==x && min>c[i]){
                min=c[i];
                y=0;
                a[y++]=i+1;
            }
            else if(m[i][j]==x && min==c[i]){
                a[y++]=i+1;
            }
        }
    }
    printf("%d\n",y);
    for(int i=0;i<y;i++) printf("%d ",a[i]);
    printf("\n");
}