#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    for(int l=1;l<=t;l++){
        int p,s,r;
        scanf("%d %d %d",&p,&s,&r);
        if(r==1 || p>s) printf("Case %d: Yes\n",l);
        else printf("Case %d: No\n",l);
    }
}