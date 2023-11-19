#include<stdio.h>
#include<string.h>
#define mod 998244353
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1000000];
        scanf("%s",s);
        long long l=strlen(s),c=0,c2=1,x=1,y=1;
        for(int i=0;i<l-1;i++){
            if(s[i]==s[i+1]) {
                c++;
                c2++;
            }
            else{
                if(c2>1) x=(x*c2)%mod;
                c2=1;
            }
        }
        if(c2>1) x=(x*c2)%mod;
        for(int i=1;i<=c;i++) y=(y*i)%mod;
        printf("%lld %lld\n",c,(x*y)%mod);
    }
}