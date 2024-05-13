#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,c=2;
        scanf("%d",&n);
        if(n==2) c=1;
        for(int i=1;i<=n-2;i++) printf("1 %d\n",i);
        printf("%d %d\n%d %d\n",c,n,n,n);
    }
}