#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    int a[20010],b[20010];
    for(int i=1;i<=20000;i++){
        a[i]=(i*2)+((i-2)*2);
        b[i]=(i*i)-a[i];
    }
    while(t--){
        int n,c0=0,c1=0,f=0;
        scanf("%lld",&n);
        char s[n];
        scanf("%s",s);
        for(int i=0;i<n;i++){
            if(s[i]=='1') c1++;
            else c0++;
        }
        for(int i=1;i<=20000;i++){
            if(a[i]==c1 && b[i]==c0){
                f=1;
                break;
            }
        }
        if(f) printf("Yes\n");
        else printf("No\n");
    }
}