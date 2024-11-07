#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve(){
	int n,m,sum=0;
	cin>>n>>m;
	int a[n],b[n];
	map<int,int>mpa,mpb;
	for(int i=0;i<n;i++) {
		cin>>a[i];
		mpa[a[i]]++;
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
		mpb[b[i]]++;
	}
	map<int,int>:: iterator it=mpb.begin();
	while(it!=mpb.end()){
		if(mpa[it->first]){
			if(it->second>mpa[it->first]) sum+=mpa[it->first];
			else sum+=it->second;
		}
		it++;
	}
	cout<<sum<<'\n';

}


int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tcase = 1;
	cin>>tcase;
	for(int tc = 1; tc<=tcase; tc++){
		solve();
	}
}