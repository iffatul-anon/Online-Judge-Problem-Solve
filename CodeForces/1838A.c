#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a,ans=0,max=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            if(a<0) ans=a;
            if(max<a) max=a;
        }
        if(ans<0) printf("%d\n",ans);
        else printf("%d\n",max);
    }
}