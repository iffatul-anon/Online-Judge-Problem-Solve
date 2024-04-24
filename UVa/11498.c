#include<stdio.h>
int main(){
    while(1){
        long long k,n,m,x,y;
        scanf("%lld",&k);
        if(k==0) break;
        scanf("%lld %lld",&n,&m);
        for(int i=0;i<k;i++){
            scanf("%lld %lld",&x,&y);
            if(x==n || y==m) printf("divisa\n");
            else if(x>n && y>m) printf("NE\n");
            else if(x>n && y<m) printf("SE\n");
            else if(x<n && y>m) printf("NO\n");
            else printf("SO\n");
        }  
    }
}