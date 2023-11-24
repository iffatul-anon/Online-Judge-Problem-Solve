#include<stdio.h>
int main(){
    int n,m,k,c=0,x[100],xx=0;
    scanf("%d %d %d",&n,&m,&k);
    int a[m+1];
    for(int i=0;i<=m;i++) scanf("%d",&a[i]);
    while(a[m]>0){
        x[xx++]=a[m]%2;
        a[m]=a[m]/2;
    }
    for(int i=0;i<m;i++){
        int y[100],yy=0,c2=0;
        while(a[i]>0){
            y[yy++]=a[i]%2;
            a[i]=a[i]/2;
        }
        for(int j=0;j<xx || j<yy;j++) {
            if(x[j]!=y[j] && j<xx && j<yy) c2++;
            if(j<xx && j>=yy) if(x[j]==1) c2++;
            if(j<yy && j>=xx) if(y[j]==1) c2++;
        }
        if(c2<=k) c++;
    }
    printf("%d\n",c);
}