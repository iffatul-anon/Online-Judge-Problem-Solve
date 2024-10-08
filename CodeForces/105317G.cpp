#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<string>v;
int l;
string s,ss;
void ok(int i){
    if(i==l) return;
    for(int j=i;j<l;j++){
        ss+=s[j];
        v.push_back(ss);
        ok(j+1);
        ss.pop_back();
    }
    return;
}

signed main(){
    int n,m;
    scanf("%lld",&n);
    for(int i=0;i<n;i++){
        cin>>s;
        l=s.size();
        ss.clear();
        ok(0);
    }
    sort(v.begin(),v.end());
    scanf("%lld",&m);
    for(int i=0;i<m;i++){
        cin>>s;
        if(s==*lower_bound(v.begin(),v.end(),s)) printf("YES\n");
        else printf("NO\n");
    }
}
