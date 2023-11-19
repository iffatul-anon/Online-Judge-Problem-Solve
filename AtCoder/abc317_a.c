#include<stdio.h>
int main(){
    int n,h,x,a,flag=0;
    scanf("%d %d %d",&n,&h,&x);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a+h>=x && flag==0) flag=i+1;
    }
    printf("%d\n",flag);
}