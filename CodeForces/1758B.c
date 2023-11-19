#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n%2==1){ 
            for(int i=0;i<n;i++) printf("%d ",n);
            printf("\n");
        }
        else{
            for(int i=0;i<n-2;i++) printf("2 ");
            printf("1 3\n");
        }
    }
}