#include<stdio.h>
int main(){
    int a,b,c,x,y;
    scanf("%d %d %d",&a,&b,&c);
    x=c;
    y=0;
    while(x%a!=0 || y%b!=0){
        if(x==0) break;
        if(x%a!=0) {
            y=x%a;
            x-=y;
        }
        else {
            x-=a;
            y+=a;
        }
    }
    if(x%a==0 && y%b==0) printf("Yes\n");
    else printf("No\n");
}