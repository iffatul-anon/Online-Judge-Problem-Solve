#include<stdio.h>
int main(){
    int n,res=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) res=(res*2)%1000000007;
    printf("%d\n",res);
}