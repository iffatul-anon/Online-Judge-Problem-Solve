#include<stdio.h>

int main(){

int x,y,i=1,j=1;
scanf("%d %d",&x,&y);


    while(i<=y){
      
        for(j=1;j<=x;j++){
          if(i<=y){
             printf("%d ",i);
            
            i++;
               
             }
           
        }
    printf("\n");
}
    return 0;
}