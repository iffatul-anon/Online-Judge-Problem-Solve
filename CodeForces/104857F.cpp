#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int n;
	cin>>n;
	string s,s2="uh-oh";
	map<string,int>mp;
	for(int i=0;i<n;i++) {
		cin>>s;
		mp[s]++;
		if(mp[s]>n/2) s2=s;
	}
	cout<<s2<<"\n";
}