#include<iostream>
#include<algorithm>
#include<string.h>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n;
        scanf("%lld",&n);
        string s,s2;
        cin>>s;
        s2=s;
        sort(s2.begin(),s2.end());
        if(s==s2) printf("YES\n");
        else printf("NO\n");
    }
}