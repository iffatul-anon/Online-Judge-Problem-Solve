#include<stdio.h>
int main() {
    int t,n,m,i;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        for(i=2;i*i<=n && i<=m;i++) if(n%i==0) break;
        if(n!=1 && m!=1  && (n<=m || (n%i==0 && i<=m))) printf("NO\n");
        else printf("YES\n");
    }
}