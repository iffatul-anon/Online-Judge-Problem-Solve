#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    char s[100010];
    scanf("%s",s);
    int n=strlen(s),ans=0;
    int a[n][26];
    for(int i=0;i<n;i++){
        for(int j=0;j<26;j++){
            a[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<26;j++){
            if(i>0) a[i][j]=a[i-1][j];
        }
        a[i][s[i]-'a']++;
    }
    for(int i=0;i<n-1;i++){
        int c=0,f=0;
        for(int j=0;j<26;j++) if(a[i][j]%2==1) c++;
        if(c>1) f=1;
        c=0;
        for(int j=0;j<26;j++) if((a[n-1][j]-a[i][j])%2==1) c++;
        if(c>1) f=1;
        if(f==0) ans++;
    }
    printf("%lld\n",ans);
}
