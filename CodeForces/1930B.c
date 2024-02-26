#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x=1,y;
        scanf("%d",&n);
        y=n;
        for(int i=0;i<n/2;i++)  printf("%d %d ",x++,y--);
        if(n%2==1) printf("%d",x);
        printf("\n");
    }
}