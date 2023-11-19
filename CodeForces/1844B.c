#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x;
        scanf("%d",&n);
        if(n==1) printf("1\n");
        else if(n==2) printf("2 1\n");
        else{
            n=n+3;
            printf("2 ");
            for(int i=4;i<=n/2;i++) printf("%d ",i);
            printf("1 ");
            for(int i=n/2+1;i<=n-3;i++) printf("%d ",i);
            printf("3\n");
        }
    }
}