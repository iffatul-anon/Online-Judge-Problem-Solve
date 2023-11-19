#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n+1],x,c;
        for(int i=1;i<=n;i++) scanf("%d",&a[i]);
        for(int i=1;i<=n;i++){
            x=i;
            c=1;
            while(i!=a[x]){
                x=a[x];
                c++;
            }
            printf("%d ",c);
        }
        printf("\n");
    }
}