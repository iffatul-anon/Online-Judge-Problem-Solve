#include<stdio.h>
int main(){
        int n,m,x;
        scanf("%d %d",&n,&m);
        int a[1000]={0};
        for(int i=0;i<n;i++) {
            scanf("%d",&x);
            a[x]++;
        }
        for(int i=1;i<=m;i++){
            if(a[i]%12==0) printf("%d\n",a[i]/12);
            else printf("%d\n",(a[i]/12)+1);
        }
}