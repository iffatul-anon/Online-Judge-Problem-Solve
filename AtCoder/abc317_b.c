#include<stdio.h>
int main(){
    int n,x,flag=0;
    scanf("%d",&n);
    int a[10000]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        a[x]=1;
    }
    for(int i=1;i<10000;i++){
        if(a[i]==1) flag=1;
        if(a[i]==0 && flag==1){
            printf("%d\n",i);
            return 0;
        }
    }
}