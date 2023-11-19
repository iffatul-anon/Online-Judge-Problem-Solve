#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,x,y;
        scanf("%d %d",&n,&k);
        x=k-1;
        y=(n-x)%k;
        if(n<=k) printf("%d\n",n/2);
        else printf("%d\n",(x+y)/2);
    }
}