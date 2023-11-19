#include <stdio.h>
int main() {
    int a,b,c,d,e,c1=0,c3=0,c4=0;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a%2==0) c1++;
    if(b%2==0) c1++;
    if(c%2==0) c1++;
    if(d%2==0) c1++;
    if(e%2==0) c1++;
    if(a<0) c4++;
    if(b<0) c4++;
    if(c<0) c4++;
    if(d<0) c4++;
    if(e<0) c4++;
    if(a>0) c3++;
    if(b>0) c3++;
    if(c>0) c3++;
    if(d>0) c3++;
    if(e>0) c3++;
    printf("%d valor(es) par(es)\n",c1);
    printf("%d valor(es) impar(es)\n",5-c1);
    printf("%d valor(es) positivo(s)\n",c3);
    printf("%d valor(es) negativo(s)\n",c4);
}