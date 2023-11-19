#include<stdio.h>
int main(){
    int n,i,tem;
    scanf("%d",&n);
    while(n!=0){
    int a[n];
    int a2[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        a2[i]=a[i];
    }
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a2[i]<a2[j]){
                tem=a2[i];
                a2[i]=a2[j];
                a2[j]=tem;
            }
        }
       
    }
    for(i=0;i<n;i++){
        if(a[i]==a2[1]){
            break;
        }
    }
    printf("%d\n",i+1);
    scanf("%d",&n);
    }

    return 0;
}