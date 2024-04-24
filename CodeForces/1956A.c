#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int k,q;
        scanf("%d %d",&k,&q);
        int a[k],n;
        for(int i=0;i<k;i++) scanf("%d",&a[i]);
        for(int i=0;i<q;i++) {
            scanf("%d",&n);
            if(n>=a[0]) printf("%d ",a[0]-1);
            else printf("%d ",n);
        }
        printf("\n");
    }
    
}