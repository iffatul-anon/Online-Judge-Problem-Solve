#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,flag=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){ 
            scanf("%d",&a[i]);
            if(i!=0 && a[i-1]>=a[i]) flag=1;
        }
        if(n%2==0 || flag==1) printf("YES\n");
        else printf("NO\n");
    }
}
