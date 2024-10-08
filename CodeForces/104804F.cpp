#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    char s[100010];
    scanf("%s",s);
    int k,v=0,c=0,ans=0,n=strlen(s),mx=0;
    scanf("%lld",&k);
    for(int j=0;j<n;j++){
        if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u') c=0;
        else v=0;
        if(v==k-1 && (s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')) {
            //v=k-2;
            ans=v;
            continue;
        }
        else if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u') {
            v++;
            ans++;
        }
        if(c==k-1 && (s[j]!='a' && s[j]!='e' && s[j]!='i' && s[j]!='o' && s[j]!='u')) {
            //c=k-2;
            ans=c;
            continue;
        }
        else  if(s[j]!='a' && s[j]!='e' && s[j]!='i' && s[j]!='o' && s[j]!='u'){
            c++;
            ans++;
        }
        //printf("v %lld c %lld ans %lld\n",v,c,ans);
        if(ans>mx) mx=ans;
    }
    printf("%lld\n",mx);
}
