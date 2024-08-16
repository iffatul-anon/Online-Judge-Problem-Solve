#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,c0=0,c1=0;
        scanf("%lld",&n);
        int b[n],x=0;
        char s[n+1];
        scanf("%s",s);
        for(int i=0;i<n;i++){
            if(s[i]=='1') b[x++]=1;
            else if(s[i]=='0' && (i==n-1 || s[i+1]=='1')) b[x++]=0;
        }
        for(int i=0;i<x;i++){
            if(b[i]==0) c0++;
            else c1++;
        }
        if(c0<c1) printf("YES\n");
        else printf("NO\n");
    }
}