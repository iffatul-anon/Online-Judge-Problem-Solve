#include <stdio.h>
#include <math.h>
int main(){
    int r,w,l;
    int i=0;
    while(scanf("%d %d %d",&r,&w,&l)){
        if(r==0){
            break;
        }
        i++;
        double a=sqrt(pow(w,2)+pow(l,2));
        if(r+r>=a){
            printf("Pizza %d fits on the table.\n",i);
        }
        else{
            printf("Pizza %d does not fit on the table.\n",i);
        }
    }
    return 0;
}