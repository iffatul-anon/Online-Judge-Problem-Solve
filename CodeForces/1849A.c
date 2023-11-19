#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int b,c,h;
        scanf("%d %d %d",&b,&c,&h);
        b--;
        if(b>c+h) printf("%d\n",(c+h)*2+1);
        else printf("%d\n",b*2+1);
    }
}