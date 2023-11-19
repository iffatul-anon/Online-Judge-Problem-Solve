#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int d=abs(a-b);
        if(d%c==0 && (d/c)%2==0) printf("%d\n",(d/c)/2);
        else printf("%d\n",((d/c)/2)+1);
    }
}