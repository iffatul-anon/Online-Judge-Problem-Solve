#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,x,y;
        scanf("%d",&n);
        int a[n],b[n],c[n];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        b[0]=0;
        b[1]=1;
        c[n-1]=0;
        c[n-2]=1;
        for(int i=1;i<n-1;i++){
            if(a[i]-a[i-1]<a[i+1]-a[i]) b[i+1]=b[i]+(a[i+1]-a[i]);
            else b[i+1]=b[i]+1;
        }
        for(int i=n-2;i>0;i--){
            if(a[i+1]-a[i]<a[i]-a[i-1]) c[i-1]=c[i]+(a[i]-a[i-1]);
            else c[i-1]=c[i]+1;
        }
        scanf("%d",&m);
        for(int i=0;i<m;i++){
            scanf("%d %d",&x,&y);
            if(x<y){
                printf("%d\n",b[y-1]-b[x-1]);
            }
            else{
                printf("%d\n",c[y-1]-c[x-1]);
            }
        }
    }
}