#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);;
    for(int i=1;i<=t;i++){
        printf("Case %d:\n",i);
        int n,k=0,x;
        scanf("%d",&n);
        for(int j=0;j<n;j++){
            char s[100];
            scanf("%s",s);
            if(s[0]=='r') printf("%d\n",k);
            else{
                scanf("%d",&x);
                k+=x;
            }
        }
    }
}
