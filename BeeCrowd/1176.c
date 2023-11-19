#include<stdio.h>

int main(){
    int t,n;
   
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n+1];
        a[0]=0;
        a[1]=1;
        
        for(int i=2;i<=n;i++){
           a[i]=a[i-2]+a[i-1];
           
        }
        printf("Fib(%d) = %d\n",n,a[n]);
    }

    return 0;
}