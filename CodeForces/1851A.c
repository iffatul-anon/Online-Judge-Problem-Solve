#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,k,h,a,b,count=0;
        scanf("%d %d %d %d",&n,&m,&k,&h);
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            b=abs(h-a);
            if(b%k==0 && (b/k)<m && a!=h) count++;
        }
        printf("%d\n",count);
    }
}