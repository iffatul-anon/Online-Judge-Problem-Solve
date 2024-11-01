#include<stdio.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n;
        scanf("%lld",&n);
        char s[n+1];
        if(n==1 || n==3) printf("-1\n");
        else if(n%2==0){
            for(int i=0;i<n/2-1;i++) printf("33");
            printf("66\n");
        }
        else{
            for(int i=0;i<n-5;i++) printf("3");
            printf("36366\n");
        }
    }
}
