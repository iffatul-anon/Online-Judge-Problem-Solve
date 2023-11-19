#include <stdio.h>
int main() {
    int n,c=0;
    scanf("%d",&n);
    int a[100020]={0};
    for(int i=2;i<=n+1;i++){
        if(a[i]==0) {
            c++;
            a[i]=1;
            for(int j=i+i;j<=n+1;j=j+i) a[j]=2;
        }
    }
    if(n==c) printf("1\n");
    else printf("2\n");
    for(int i=2;i<=n+1;i++) printf("%d ",a[i]);
    printf("\n");
}