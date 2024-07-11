#include<stdio.h>
#define int long long
signed main(){
    int n,x,y,z;
    scanf("%lld",&n);
    for(int i=0;i<n;i++){
        scanf("%lld %lld",&x,&y);
        if(y>-2) printf("YES\n");
        else printf("NO\n");
    }
}
