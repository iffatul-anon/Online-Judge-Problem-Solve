#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int k=1;k<=t;k++){
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        n=(n/2);
        printf("Case %d: %d\n",k,a[n]);

    }
    return 0;
}