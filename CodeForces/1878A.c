#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,a,f=0;
        scanf("%d %d",&n,&k);
        for(int i=0;i<n;i++) {
            scanf("%d",&a);
            if(a==k) f=1;
        }
        if(f==1) printf("YES\n");
        else printf("NO\n");
    }
}