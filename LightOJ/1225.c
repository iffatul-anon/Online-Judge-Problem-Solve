#include <stdio.h>
#include<string.h>
int main() {
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        char s[100];
        scanf("%s",s);
        int l=strlen(s),f=0;
        for(int j=0;j<l/2;j++) if(s[j]!=s[l-j-1]) f=1;
        if(f) printf("Case %d: No\n",i);
        else printf("Case %d: Yes\n",i);
    }
}
