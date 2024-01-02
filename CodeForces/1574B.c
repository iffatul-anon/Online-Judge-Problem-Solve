#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c,m,x,y=0;
        scanf("%d %d %d %d",&a,&b,&c,&m);
        x=a+b+c-3;
        if(a-1>b+c) y=(a-b-c-1);
        else if(b-1>a+c) y=(b-a-c-1);
        else if(c-1>a+b) y=(c-a-b-1);
        if(m>x || m<y ) printf("NO\n");
        else printf("YES\n");
    }
}