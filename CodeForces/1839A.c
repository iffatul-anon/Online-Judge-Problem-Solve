#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,x=1,count=1;
        scanf("%d %d",&n,&k);
        while(x<n){
            count++;
            x=x+k;
        }
        printf("%d\n",count);
    }
}