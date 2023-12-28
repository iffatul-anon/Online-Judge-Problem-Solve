#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b,i,f=0;
        scanf("%lld %lld",&a,&b);
        if(a-b!=1) printf("NO\n");
        else{
            a+=b;
            for(i=2;i*i<=a;i++) if(a%i==0) f=1;
            if(f) printf("NO\n");
            else printf("YES\n");
        }
    }
}