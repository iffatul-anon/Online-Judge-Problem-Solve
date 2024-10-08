#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        string s;
        cin >> s;
        int f=0;
        for(int i=0;i<s.size()-1;i++) {
            if(s[i]=='1')f=1;
        }
        if(f)cout<<"Yes\n";
        else cout<<"No\n";
    }
}