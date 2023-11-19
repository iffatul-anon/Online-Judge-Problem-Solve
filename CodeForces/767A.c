#include<stdio.h>
int main(){
    int n,s;
    scanf("%d",&n);
    int a[1000001]={0},m=n;
    for(int i=0;i<n;i++){
        scanf("%d",&s);
        a[s]=1;
        while(a[m]) printf("%d ",m--);
        printf("\n");
    }
}