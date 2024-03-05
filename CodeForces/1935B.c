#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,mex=0,mex2=0,mex3=0,anon;
        scanf("%d",&n);
        int a[n];
        int b[n+10],c[n+10],d[n+10];
        for(int i=0;i<=n+10;i++) {
            b[i]=0;
            c[i]=0;
            d[i]=0;
        }
        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
            b[a[i]]=1;
            while(b[mex]) mex++;
        }
        for(int i=0;i<n;i++){
            c[a[i]]=1;
            while(c[mex2]) mex2++;
            if(mex==mex2){
                anon=i+1;
                for(int j=i+1;j<n;j++){
                    d[a[j]]=1;
                    while(d[mex3]) mex3++;
                }
                break;
            }
        }
        if(mex2==mex3) printf("2\n1 %d\n%d %d\n",anon,anon+1,n);
        else printf("-1\n");
    }
}