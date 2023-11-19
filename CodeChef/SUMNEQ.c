#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if((i+j)==n){
                count++;
            }
            if((i+j)>n){
                break;
            }
        }
    }
    printf("%d\n",count);
   
    return 0;
}