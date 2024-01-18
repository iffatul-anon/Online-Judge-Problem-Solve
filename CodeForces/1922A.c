#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,f=0;
        scanf("%d",&n);
        char a[n+1],b[n+1],c[n+1];
        scanf("%s %s %s",a,b,c);
        for(int i=0;i<n;i++) if(a[i]!=c[i] && b[i]!=c[i]) f=1;
        if(f) printf("YES\n");
        else printf("NO\n");
    }
}