#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,f=0;
        scanf("%d %d",&n,&k);
        int a[n];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        for(int i=1;i<n;i++) if(a[i]<a[i-1]) f=1;
        if(f==0 || k>1) printf("YES\n");
        else printf("NO\n");
    }
}