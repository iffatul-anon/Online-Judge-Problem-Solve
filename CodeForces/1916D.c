#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,y;
        scanf("%d",&n);
        if(n==1) printf("1\n");
        else{
            printf("196");
            for(int i=0;i<n-3;i++) printf("0");
            printf("\n");
            for(int i=0;i<n/2;i++){
                y=n-3-(i*2);
                printf("1");
                for(int j=0;j<i;j++) printf("0");
                printf("6");
                for(int j=0;j<i;j++) printf("0");
                printf("9");
                for(int j=0;j<y;j++) printf("0");
                printf("\n");
            }
            for(int i=0;i<n/2;i++){
                y=n-3-(i*2);
                printf("9");
                for(int j=0;j<i;j++) printf("0");
                printf("6");
                for(int j=0;j<i;j++) printf("0");
                printf("1");
                for(int j=0;j<y;j++) printf("0");
                printf("\n");
            }
        }
    }
}