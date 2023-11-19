#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y,n;
        scanf("%d %d %d",&x,&y,&n);
        int a[n+10];
        int i=0,z=y;
        while(z>=x){
            a[i++]=z;
            z-=i;
            if(i==n) break;
        }
        if(i<n) printf("-1\n");
        else{
            printf("%d ",x);
            for(int i=n-2;i>=0;i--) printf("%d ",a[i]);
            printf("\n");
        }
    }
}