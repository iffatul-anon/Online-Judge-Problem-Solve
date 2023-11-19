#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,flag=0,i;
        scanf("%lld",&n);
        if(n==1) printf("FastestFinger\n");
        else if(n%2!=0 || n==2) printf("Ashishgup\n");
        else{
            for(i=3;i*i<=n;i++) if(n%i==0 && (i+n/i)%2==1) flag=1;
            if(flag) printf("Ashishgup\n");
            else printf("FastestFinger\n");
        }
    }
    return 0;
}