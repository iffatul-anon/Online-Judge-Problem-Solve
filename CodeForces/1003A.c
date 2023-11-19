#include <stdio.h>
int main() {
    int n,x,max=0;
    scanf("%d",&n);
    int a[1000]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        a[x]++;
        if(a[x]>max) max=a[x];
    }
    printf("%d\n",max);
}