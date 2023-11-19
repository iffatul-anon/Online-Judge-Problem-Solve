#include<stdio.h>
int main() {
    int n,k,flag=97;
    scanf("%d %d",&n,&k);
    if(k>26) k=26;
    for(int i=0;i<n;i++){
        printf("%c",flag++);
        if(flag-97==k) flag=97;
    }
}