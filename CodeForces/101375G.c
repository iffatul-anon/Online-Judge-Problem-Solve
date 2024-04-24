#include<stdio.h>
int main(){
    long long n,x,a=0,b=0,c=0,d=0;
    scanf("%lld",&n);
    for(int i=0;i<n;i++) {
        scanf("%lld",&x);
        if(i%4==0) a+=x;
        else if(i%4==1) b+=x;
        else if(i%4==2) c+=x;
        else if(i%4==3) d+=x;
    }
    if(a>=b && a>=c && a>=d) printf("A\n");
    else if(b>a && b>=c && b>=d) printf("B\n");
    else if(c>a && c>b && c>=d) printf("C\n");
    else printf("D\n");
}