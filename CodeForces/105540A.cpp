#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int n,m,k;
	cin>>n>>m>>k;
	string s,s2;
	vector<vector<string> > v(n);
	map<string,int>mp;
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=0;j<m*k;j+=k){
			s2=s.substr(j,k);
			mp[s2]++;
			v[i].push_back(s2);
		}
	}
	for(auto it:mp){
	    if(it.second==1){
	        for(int i=0;i<n;i++){
	            for(int j=0;j<m;j++){
	                if(it.first==v[i][j]){
	                    cout<<i+1<<' '<<j+1<<"\n";
	                }
	            }
	        }
	    }
	}
}
