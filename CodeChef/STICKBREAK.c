#include<stdio.h>
int main(){
    int t,l,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&l,&k);
        if(l%k==0){
            printf("0\n");
        }
        else{
            printf("1\n");
        }
    }
}