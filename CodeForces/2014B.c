#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,k,sum=0,f=0,x,y;
        scanf("%lld %lld",&n,&k);
        if(k%2==1){
            if(n%2==0){
                x=k/2;
                if(x%2==0) f=1;
                else f=0;
            }
            else{
                x=k/2;
                if(x%2==0) f=0;
                else f=1;
            }
        }
        else{
            x=k/2;
            if(x%2==0) f=1;
            else f=0;
        }
        if(f) printf("YES\n");
        else printf("NO\n");
    }
}