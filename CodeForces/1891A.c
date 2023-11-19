#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,f=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        for(int i=16;i<n-1;i++) if(a[i]>a[i+1]) f=1;
        for(int i=8;i<n-1 && i<15;i++) if(a[i]>a[i+1]) f=1;
        for(int i=4;i<n-1 && i<7;i++) if(a[i]>a[i+1]) f=1;
        for(int i=2;i<n-1 && i<3;i++) if(a[i]>a[i+1]) f=1;
        if(f==0) printf("YES\n");
        else printf("NO\n");
    }
}