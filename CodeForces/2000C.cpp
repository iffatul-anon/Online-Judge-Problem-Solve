#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<vector>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,m,anon;
        scanf("%lld",&n);
        int a[n];
        map<int,int> mp;
        for(int i=0;i<n;i++) {
            scanf("%lld",&a[i]);
            mp[a[i]]++;
        }
        anon=mp.size();
        scanf("%lld",&m);
        while(m--){
            char s[300000];
            scanf("%s",s);
            int x[26],z[26]={0},l=strlen(s),y,f=1,anon2=0;
            if(l!=n) f=0;
            else{
                for(int i=0;i<l;i++){
                    y=s[i]-'a';
                    if(z[y]==0) {
                        x[y]=a[i];
                        z[y]=1;
                    }
                    else if(x[y]!=a[i]) f=0;
                }
                for(int i=0;i<26;i++) if(z[i]==1) anon2++;
                if(anon!=anon2) f=0;
            }
            if(f) printf("YES\n");
            else printf("NO\n");
        }
    }
}