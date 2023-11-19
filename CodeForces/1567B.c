#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,x;
        scanf("%d %d",&a,&b);
        if((a-1)%4==0) x=a-1;
        if((a-1)%4==1) x=1;
        if((a-1)%4==2) x=a;
        if((a-1)%4==3) x=0;
        if(x==b) printf("%d\n",a);
        else if((x^b)!=a) printf("%d\n",a+1);
        else printf("%d\n",a+2);
    }
}