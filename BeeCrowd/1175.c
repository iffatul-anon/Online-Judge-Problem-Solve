#include<stdio.h>

int main(){
    int N[20],i,N2[20];

    for(i=0;i<20;i++){
        scanf("%d",&N[i]);
    }

    for(i=0;i<20;i++){
        N2[i]=N[19-i];
        printf("N[%d] = %d\n",i,N2[i]);

    }

    return 0;
}