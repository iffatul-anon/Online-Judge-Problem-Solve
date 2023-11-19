#include<stdio.h>
#include<stdlib.h>
int main(){
    int p,n;
    scanf("%d %d",&p,&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++){
        if(abs(a[i]-a[i-1])>p){
            printf("GAME OVER\n");
            return 0;
        }
    }
    printf("YOU WIN\n");
}