#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n;
    scanf("%lld",&n);
    vector<string>v;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    int l=v[0].size();
    int k=10000000000000;
    for(int i=0;i<n;i=i+2){
        int c=0;
        for(int j=0;j<l;j++){
            if(v[i][j]==v[i+1][j]) c++;
            else break;
        }
        if(c<k) k=c;
    }
    printf("%lld\n",k);
}
