#include<stdio.h>
#include<string.h>
int main(){
    char a[27];
    while(EOF!=scanf("%s",&a)){
        int n;
        scanf("%d",&n);
        int x;
        for(int i=0;i<n;i++){
            scanf("%d",&x);
            printf("%c",a[x-1]);
        }
        printf("\n");
    }
    return 0;
}