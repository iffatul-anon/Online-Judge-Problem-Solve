#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a=n+1;
        int b=n+2;
        int c=n+3;
        int d=n+4;
        int e=n+5;
        int f=n+6;
        int g=n+7;
        int h=n+8;
        if(a%400==0 || (a%4==0 && a%100!=0)){
            printf("%d\n",a);
        }
        else if(b%400==0 || (b%4==0 && b%100!=0)){
            printf("%d\n",b);
        }
        else if(c%400==0 || (c%4==0 && c%100!=0)){
            printf("%d\n",c);
        }
        else if(d%400==0 || (d%4==0 && d%100!=0)){
            printf("%d\n",d);
        }
        else if(e%400==0 || (e%4==0 && e%100!=0)){
            printf("%d\n",e);
        }
        else if(f%400==0 || (f%4==0 && f%100!=0)){
            printf("%d\n",f);
        }
        else if(g%400==0 || (g%4==0 && g%100!=0)){
            printf("%d\n",g);
        }
        else if(h%400==0 || (h%4==0 && h%100!=0)){
            printf("%d\n",h);
        }
    }
    return 0;
}