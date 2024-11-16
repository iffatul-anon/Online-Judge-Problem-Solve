#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<numeric>
#include<array>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--) {
        int n,q,f=1;
        cin>>n>>q;
        vector<array<int,3> >v;
        for(int i=0;i<q;i++){
            int x,l,r;
            cin>>x>>l>>r;
            v.push_back({x,l,r});
        }
        sort(v.begin(),v.end());
        for(int i=1;i<q;i++){
            if(v[i][0]==v[i-1][0]){
                if(v[i][1]==v[i-1][1]){
                    f--;
                    v[i][2]=v[i-1][2];
                }
                else if(v[i][1]<=v[i-1][2]) {
                    f--;
                    if(v[i][2]>v[i-1][2]) v[i][2]=v[i-1][2];
                }
            }
            if(f<0) break;
        }
        if(f<0) cout<<"NO\n";
        else cout<<"YES\n";
    }
}