#include<stdio.h>
int main(){
    int n,x,f=0;
    scanf("%d",&n);
    int a[101]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        a[x]=1;
    }
    for(int i=100;i>0;i--){
        if(a[i]==1) f++;
        if(f==2) {
            printf("%d\n",i);
            return 0;
        }
    }
}