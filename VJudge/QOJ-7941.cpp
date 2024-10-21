#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define ppi pair<pair<int, int>, int> 

void solve(){
	int n;
	ll sum=0;
	cin>>n;
	ll a[2*n];
	for(int i=0;i<2*n;i++) cin>>a[i];
	sort(a,a+(2*n));
	for(int i=0;i<n;i++){
		sum+=(a[(2*n)-1-i]-a[i]);
	}
	cout<<sum<<endl;

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