#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,m,c=0,x,y,i;
        scanf("%lld %lld",&n,&m);
        c=n;
        for(i=2;i<=m && i<=n;i++){
            x=i*i;
            y=n+i;
            c+=y/x;
        }
        printf("%lld\n",c);
    }
}