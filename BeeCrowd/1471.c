#include<stdio.h>
int main(){
    int n,r;
    while(EOF!=scanf("%d %d",&n,&r)){
        int a[100000]={0};
        for(int i=0;i<r;i++){
            int b;
            scanf("%d",&b);
            a[b]=1;
        }
        if(n==r){
            printf("*\n");
        }
        else{
            for(int i=1;i<=n;i++){
                if(a[i]==0){
                    printf("%d ",i);
                }
            }
            printf("\n");
        }
    }
    return 0;
}