#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a[100],i=2,c=0,x=1,y=1,z=1;
        scanf("%d",&n);
        while(i<10000){
            if(n%i==0) {
                a[c++]=i;
                n/=i;
            }
            else i++;
        }
        if(n>1) a[c++]=n;
        x=a[0];
        for(i=1;i<c;i++) {
            y*=a[i];
            if(y!=x) break;
        }
        for(i=i+1;i<c;i++) z*=a[i];
        if(x!=y && x!=z && y!=z && x>1 && y>1 && z>1) printf("YES\n%d %d %d\n",x,y,z);
        else printf("NO\n");
    }
}