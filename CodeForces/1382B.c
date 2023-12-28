#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,f;
        scanf("%d",&n);
        int a[n];
        f=n;
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        for(int i=0;i<n;i++){
            if(a[i]>1){
                f=i;
                break;
            }
        }
        if(f==n && f%2==0) printf("Second\n");
        else if(f==n) printf("First\n");
        else if(f%2==0) printf("First\n");
        else printf("Second\n");
    }
}