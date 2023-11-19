#include<stdio.h>
int main(){
    int t,n[2000],i,j,k;

    scanf("%d",&t);
    
    for(i=0;i<1000;i++){
     
        for(j=0;j<t;j++){
            n[i]=j;
            i++;
        }
        i--;
    }

    for(k=0;k<1000;k++){
        printf("N[%d] = %d\n",k,n[k]);
    }

    return 0;
}