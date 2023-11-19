#include <stdio.h>
int main(){
    int l,c;
    scanf("%d %d",&l,&c);
    int sum1=(l*c)+((l-1)*(c-1));
    int sum2=(l-1)*2+(c-1)*2;
    printf("%d\n%d\n",sum1,sum2);
    return 0;
}