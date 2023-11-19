#include<stdio.h>
#include<string.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,q,l,r;
        scanf("%d %d",&n,&q);
        char s[n+1];
        int a[n],b[n],x=0,y=0;
        scanf("%s",s);
        for(int i=0;i<n;i++){
            if(s[i]=='1') x++;
            else y++;
            a[i]=x;
            b[i]=y;
        }
        for(int i=0;i<q;i++){
            scanf("%d %d",&l,&r);
            if((s[l-1]=='1' && a[l-1]>1) || (s[l-1]=='0' && b[l-1]>1) || (s[r-1]=='1' && a[r-1]<x) || (s[r-1]=='0' && b[r-1]<y)) printf("YES\n");
            else printf("NO\n");
        }
    }
}