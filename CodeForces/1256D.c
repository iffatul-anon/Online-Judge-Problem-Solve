#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,k,c=0;
        scanf("%lld %lld",&n,&k);
        char s[n+1];
        scanf("%s",s);
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                if(k>c){
                    s[i]='1';
                    s[i-c]='0';
                    k-=c;
                }
                else{
                    s[i]='1';
                    s[i-k]='0';
                    break;
                }
            }
            else c++;
        }
        printf("%s\n",s);
    }
}
