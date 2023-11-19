#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,flag=0;
        scanf("%d",&n);
        int a[n+1];
        for(int i=1;i<=n;i++) scanf("%d",&a[i]);
        if(a[1]==n) {
            for(int i=1;i<=n;i++){
                if(a[a[i]]<i) {
                    flag=1;
                    break;
                }
            }
            if(flag==1) printf("NO\n");
            else printf("YES\n");
        }
        else printf("NO\n");
    }
}