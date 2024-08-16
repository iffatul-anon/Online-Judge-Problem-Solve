#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int a,x[100],y=0;
        scanf("%lld",&a);
        while(a>0){
            x[y++]=a%10;
            a=a/10;
        }
        if(y>=3 && x[y-1]==1 && x[y-2]==0 && (x[y-3]>=2 || (y>3 && x[y-3]>0))) printf("YES\n");
        else printf("NO\n");
    }
}