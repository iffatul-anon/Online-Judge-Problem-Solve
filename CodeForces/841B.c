#include<stdio.h>
int main(){
    int n,a,c1=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a%2==1) c1++;
    }
    if(c1) printf("First\n");
    else printf("Second\n");
}