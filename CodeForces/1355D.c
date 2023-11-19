#include<stdio.h>
int main(){
    int n,s,k;
    scanf("%d %d",&n,&s);
    if((s/n)!=1){
        printf("YES\n");
        for(int i=1;i<n;i++) printf("%d ",s/n);
        printf("%d\n1\n",(s/n)+(s%n));
    }
    else printf("NO\n");
}