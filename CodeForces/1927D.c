#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,p,l,r;
        scanf("%d",&n);
        int a[n],b[n],c[n],x=0;
        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
            if(i==0) {
                b[i]=1;
                c[x++]=1;
            }
            else{
                if(a[i-1]==a[i]) b[i]=b[i-1];
                else{
                    b[i]=b[i-1]+1;
                    c[x++]=i+1;
                }
            }
        }
        scanf("%d",&p);
        while(p--){
            scanf("%d %d",&l,&r);
            if(b[l-1]==b[r-1]) printf("-1 -1\n");
            else printf("%d %d\n",l,c[b[l-1]]);
        }
    }
}