#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x;
        scanf("%d",&n);
        for(int i=0;i<n;i++) scanf("%d",&x);
        if(n%2==0) printf("2\n1 %d\n1 %d\n",n,n);
        else printf("4\n1 %d\n1 %d\n%d %d\n%d %d\n",n-1,n-1,n-1,n,n-1,n);
    }
}