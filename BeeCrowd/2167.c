#include<stdio.h>
int main(){
    int n,flag=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            flag++;
            break;
        }
    }
    if(flag==0){
    printf("0\n");
    }
    else{
        printf("%d\n",i+2);
    }
    return 0;
}