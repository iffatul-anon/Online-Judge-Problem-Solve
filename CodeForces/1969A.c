#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,f=0;
        scanf("%d",&n);
        int a[n+1];
        for(int i=1;i<=n;i++) scanf("%d",&a[i]);
        for(int i=1;i<=n;i++) if(i==a[a[i]]) f=1;
        if(f) printf("2\n");
        else printf("3\n");
    }
}