#include<stdio.h>
int main(){
    int n,l,r,a,c;
    scanf("%d %d %d",&n,&l,&r);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(l<=a && a<=r) c=a;
        else if(a<l) c=l;
        else if(a>r) c=r;
        printf("%d ",c);
    }
    printf("\n");
}