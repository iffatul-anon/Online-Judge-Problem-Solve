#include<stdio.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,c=0,sum=0,a[300000];
        scanf("%lld",&n);
        char s[n+1];
        scanf("%s",s);
        s[0]='(';
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                a[c++]=i;
            }
            else if(s[i]==')'){
                c--;
                sum+=i-a[c];
            }
            else if(c==0){
                a[c++]=i;
            }
            else{
                c--;
                sum+=i-a[c];
            }
        }
        printf("%lld\n",sum);
    }
}