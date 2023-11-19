#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a,b[2*n],c[2*n],x=0,y=0;
        for(int i=1;i<=2*n;i++){
            scanf("%d",&a);
            if(a%2==0) b[x++]=i;
            if(a%2==1) c[y++]=i;
        }
        if(x%2==1) x--;
        if(y%2==1) y--;
        if(x==2*n) x-=2;
        if(y==2*n) y-=2;
        if(x+y==2*n) x-=2; 
        for(int i=0;i<x-1;i=i+2) printf("%d %d\n",b[i],b[i+1]);
        for(int i=0;i<y-1;i=i+2) printf("%d %d\n",c[i],c[i+1]);
    }
}