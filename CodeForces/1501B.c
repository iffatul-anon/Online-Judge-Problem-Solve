#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],b[n],x=0;
        for(int i=0;i<n;i++){ 
            scanf("%d",&a[i]);
            b[i]=0;
        }
        for(int i=n-1;i>=0;i--){
            if(x<a[i]) x=a[i];
            if(x>0){
                b[i]=1;
                x--;
            }
        }
        for(int i=0;i<n;i++) printf("%d ",b[i]);
        printf("\n");
    }
}