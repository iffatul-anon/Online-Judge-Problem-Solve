#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,ans,x;
        scanf("%d %d",&n,&ans);
        for(int i=1;i<n;i++) {
            scanf("%d",&x);
            ans=ans&x;
        }
        printf("%d\n",ans);
    }
}