#include<stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,p,x,y,z;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&p);
            if(p==1) x=i;
            if(p==2) y=i;
            if(p==n) z=i;
        }
        if((x<z && z<y) || (x>z && z>y)) printf("%d %d\n",z,z);
        else if(x<z && x<y) printf("%d %d\n",y,z);
        else if(x<z && y<x) printf("%d %d\n",x,z);
        else if(z<x && x<y) printf("%d %d\n",x,z);
        else if(z<x && y<x) printf("%d %d\n",y,z);
    }
}