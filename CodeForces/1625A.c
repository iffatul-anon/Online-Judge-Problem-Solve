#include<stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,l;
        scanf("%d %d",&n,&l);
        int a[l],x,y,ans=0;
        for(int i=0;i<l;i++) a[i]=n;
        for(int i=0;i<n;i++){
            scanf("%d",&x);
            y=l-1;
            while(x>0){
                a[y--]-=x%2;
                x=x/2;
            }
        }
        for(int i=0;i<l;i++){
            if(a[i]>=(n+1)/2) ans=ans*2;
            else ans=ans*2+1;
        }
        printf("%d\n",ans);
    }
    return 0;
}