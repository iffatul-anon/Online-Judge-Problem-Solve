#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n%3==0) printf("%d %d %d\n",n/3,n/3,n/3);
        else if(n%3==1) printf("%d %d %d\n",n/3,n/3,n/3+1);
        else printf("%d %d %d\n",n/3,n/3+1,n/3+1);
    }
}