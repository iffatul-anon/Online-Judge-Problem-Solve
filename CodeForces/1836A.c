#include<stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,l,a[100]={0},flag=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++){ 
            scanf("%d",&l);
            a[l]++;
        }
        for(int i=1;i<100;i++){
            if(a[i]>a[i-1]) {
                flag=1;
                break;
            }
        }
        if(flag==1) printf("NO\n");
        else printf("YES\n");
    }
}