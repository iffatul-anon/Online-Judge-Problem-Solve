#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    while(t--){
        int n,f=0;
        cin>>n;
        int a[n],b[n],c[2*n+10];
        for(int i=0;i<2*n+10;i++) c[i]=0;
        map<pair<int,int>,int>mp;
        for(int i=0;i<n;i++) {
            cin>>a[i]>>b[i];
            mp[{a[i],b[i]}]++;
        }
        string s;
        for(int i=0;i<n;i++){
            if(b[i]-a[i]==0){
                if(mp[{a[i],b[i]}]>1) s+='0';
                else s+='1';
            }
            else s+='1';
        }
        for(int i=0;i<n;i++){
            if(b[i]-a[i]==0){
                c[a[i]]=1;
            }
        }
        for(int i=1;i<2*n+10;i++){
            c[i]+=c[i-1];
        }
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                if(b[i]-a[i]!=0 && b[i]-a[i]+1==c[b[i]]-c[a[i]-1]) s[i]='0';
            }
        }
        cout<<s<<"\n";
    }
}