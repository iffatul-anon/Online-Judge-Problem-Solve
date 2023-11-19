#include <stdio.h>
int main(){
    int n,m,flag=0,x,count=0;
    scanf("%d %d",&n,&m);
    int a[55]={0},b[m],c[m];
    for(int i=0;i<m;i++) {
        scanf("%d %d",&b[i],&c[i]);
        a[b[i]]=1;
        a[c[i]]=1;
    }
    for(int i=1;i<=n;i++) if(a[i]==0) flag=1;
    for(int i=1;i<=n;i++){
        int flag2=0;
        for(int j=0;j<m;j++) if(i==c[j]) flag2=1;
        if(flag2==0){
            count++;
            x=i;
        }
    }
    if(flag==1 || count>1) printf("-1\n");
    else printf("%d\n",x);
}