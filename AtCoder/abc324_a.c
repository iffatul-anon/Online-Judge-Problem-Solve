#include<stdio.h>
int main(){
    int n,c=1,a,b;
    scanf("%d",&n);
    scanf("%d",&a);
    for(int k=1;k<n;k++){
        scanf("%d",&b);
        if(b==a) c++;
    }
    if(c==n) printf("Yes\n");
    else printf("No\n");
}