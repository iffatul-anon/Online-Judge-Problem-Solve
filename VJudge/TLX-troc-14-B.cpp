#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n,m;
    scanf("%lld %lld",&n,&m);
    char s[n][m+1];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j%2) s[i][j]='B';
            else s[i][j]='W';
        }
        s[i][m]=0;
    }
    for(int i=0;i<n;i++) printf("%s\n",s[i]);
}
