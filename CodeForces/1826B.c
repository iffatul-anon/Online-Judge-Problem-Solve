#include<stdio.h>
#include<stdlib.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],x,gcd=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n/2;i++){
            if(a[i]!=a[n-i-1]){ 
                x=abs(a[i]-a[n-i-1]);
                if(gcd==0) gcd=x;
                while(gcd != x) {
                    if(gcd > x){ 
                        if(gcd % x == 0) gcd=x;
                        else gcd =gcd % x;
                    }
                    else{ 
                        if(x % gcd == 0) x=gcd;
                        else x =x % gcd;
                    }
                }
            }
        }
        printf("%d\n",gcd);
    }
}