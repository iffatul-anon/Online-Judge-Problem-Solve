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
    int anon[1001]={0};
    for(int i=0;i<2*n;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        anon[a[x-1][y-1]]++; 
    }
    int count=0;
    for(int i=0;i<1001;i++){
        if(anon[i]>0){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}