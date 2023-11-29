#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c,f1=0,f2=0,f3=0,xx;
        scanf("%d %d %d",&a,&b,&c);
        xx=abs(b-c);
        if(xx%2==0) f1=1;
        xx=abs(a-c);
        if(xx%2==0) f2=1;
        xx=abs(a-b);
        if(xx%2==0) f3=1;
        printf("%d %d %d\n",f1,f2,f3);
    }
}