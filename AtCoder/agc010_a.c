#include <stdio.h>

int main() {
    int n,x,o=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(x%2==1) o++;
    }
    if(o%2==0) printf("YES\n");
    else printf("NO\n");
    return 0;
}