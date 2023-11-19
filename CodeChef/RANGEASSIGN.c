#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,flag=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        if(a[0]==a[n-1]) flag=1;
        for(int i=0;i<n;i++){
            if(a[i]==a[0] && a[i+1]==a[n-1]){
                flag=1;
                break;
            }
        }
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
}