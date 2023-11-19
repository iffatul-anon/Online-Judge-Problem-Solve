#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        printf("%d\n",(n-2)/k+2);
    }
}