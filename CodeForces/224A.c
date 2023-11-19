#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,s1,s2,s3;
    scanf("%d %d %d",&a,&b,&c);
    s1=sqrt(a*c/b);
    s2=sqrt(a*b/c);
    s3=sqrt(b*c/a);
    printf("%d\n",4*(s1+s2+s3));
}