#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t=0;
	string s;
	cin>>s;
	for(int i=0;i<5;i++) if(s[i]=='T') t++;
	if(t==3) cout<<"T1\n";
	else cout<<"DRX\n";
}
