#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int s,y=n;
        for(int i=0;i<n;i++){
            scanf("%d",&s);
            if(s!=i && y==n) y=i; 
        }
        while(y>=0){
            printf("%d\n",y);
            fflush(stdout);
            scanf("%d",&y);
        }
    }
}