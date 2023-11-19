#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[4];
    for(int i=0;i<4;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(a[i]>a[j]){
                int tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }
    printf("%d\n",abs((a[0]+a[3])-(a[1]+a[2])));
    return 0;
}