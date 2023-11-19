#include<stdio.h>
int main(){
    int p,a,b,min;
    scanf("%d",&min);
    scanf("%d",&p);
    if(p<min) min=p;
    scanf("%d",&p);
    if(p<min) min=p;
    scanf("%d",&p);
    if(p<min) min=p;
    scanf("%d %d",&a,&b);
    if(b<min) min=b+1;
    if(a>min) printf("0\n");
    else printf("%d\n",min-a);
}