#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,a=0,b=0,c=0,d=0,sum=0;
        scanf("%lld",&n);
        char s[(4*n)+10];
        scanf("%s",s);
        for(int i=0;i<4*n;i++){
            if(s[i]=='A') a++;
            else if(s[i]=='B') b++;
            else if(s[i]=='C') c++;
            else if(s[i]=='D') d++;
        }
        if(a<=n) sum+=a;
        else sum+=n;
        if(b<=n) sum+=b;
        else sum+=n;
        if(c<=n) sum+=c;
        else sum+=n;
        if(d<=n) sum+=d;
        else sum+=n;
        printf("%lld\n",sum);
    }
}