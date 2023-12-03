#include<stdio.h>
int main(){
    int m,d,y,m1,d1;
    scanf("%d %d %d %d %d",&m,&d,&y,&m1,&d1);
    if(d1<d) printf("%d %d %d\n",y,m1,d1+1);
    else if(m1<m) printf("%d %d 1\n",y,m1+1);
    else printf("%d 1 1\n",y+1);   
}