#include<stdio.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,m,sum=0;
        scanf("%lld %lld",&n,&m);
        char s[n+1];
        scanf("%s",s);
        int a[26]={0};
        for(int i=0;i<n;i++) a[s[i]-'A']++;
        for(int i=0;i<7;i++) if(a[i]<m) sum+=(m-a[i]);
        printf("%lld\n",sum);
    }
}