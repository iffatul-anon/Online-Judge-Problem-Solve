#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y,a,b,c;
        scanf("%d %d",&x,&y);
        if(y%2==0) {
            a=y/2;
            b=a*7;
            if(x>b){
                c=(x-b)/15;
                if((x-b)%15!=0) c++;
                printf("%d\n",a+c);
            }
            else printf("%d\n",a);
        }
        else{
            a=(y/2)+1;
            b=(a*7)+4;
            if(x>b){
                c=(x-b)/15;
                if((x-b)%15!=0) c++;
                printf("%d\n",a+c);
            }
            else printf("%d\n",a);
        }
    }
}