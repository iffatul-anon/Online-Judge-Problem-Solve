#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,flag=0;
        scanf("%d",&n);
        int a[n],b[n];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        for(int i=0;i<n;i++) scanf("%d",&b[i]);
        for(int i=0;i<n-1;i++){
            if((a[i]>b[i]) || (a[i]!=b[i] && b[i]>b[i+1]+1)){
                flag=1;
                break;
            }
        }
        if((a[n-1]>b[n-1]) || (a[n-1]!=b[n-1] && b[n-1]>b[0]+1)) flag=1;
        if(flag==0) printf("YES\n");
        else printf("NO\n");
    }
}