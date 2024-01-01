#include<stdio.h>
int main(){
    int n,a,c=0;
    scanf("%d %d",&n,&a);
    int t[n+1],x=a,y=a;
    for(int i=1;i<=n;i++) scanf("%d",&t[i]);
    while(1){
        if(x==y && t[x]==1) c++;
        else if(t[x]==1 && t[y]==1) c+=2;
        x--;
        y++;
        if(x==0 || y==n+1) break;
    }
    while(x>0){
        if(t[x]==1) c++;
        x--;
    }
    while(y<=n){
        if(t[y]==1) c++;
        y++;
    }
    printf("%d\n",c);
}