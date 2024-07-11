#include<stdio.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,m,k,a[200005],x=1,f=1;
        scanf("%lld %lld %lld",&n,&m,&k);
        char s[n+1];
        scanf("%s",s);
        a[0]=0;
        for(int i=0;i<n;i++) if(s[i]=='L') a[x++]=i+1;
        a[x++]=n+1;
        for(int i=1;i<x;i++){
            if(a[i]-a[i-1]<=m) continue;
            if(s[a[i-1]+m-1]=='C'){
                f=0;
                break;
            }
            for(int j=a[i-1]+m;j<a[i];j++){
                if(s[j-1]=='C'){
                    f=0;
                    break;
                }
                else k--;
            }
            if(k<0 || f==0){
                f=0;
                break;
            }
        }
        if(f) printf("YES\n");
        else printf("NO\n");
    }
    
}