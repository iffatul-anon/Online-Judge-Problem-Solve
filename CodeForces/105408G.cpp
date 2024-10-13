#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e7+10;
int a[N],p[N],ind=0;
void sieve(){
	p[ind++]=2;
	for(int i=3;i<=N;i+=2){
		if(a[i]==0){
			p[ind++]=i;
			if(i*i>N) continue;
			for(int j=i*i;j<=N;j+=2*i){
				a[j]=1;
			}
		}
	}
}
signed main(){
	sieve();
	int n;
	scanf("%lld",&n);
	int a[n],gcd;
	map<int,int>mp,mp2;
	for(int i=0;i<n;i++) {
		scanf("%lld",&a[i]);
		mp[a[i]]++;
		if(i==0) gcd=a[i];
		gcd=__gcd(gcd,a[i]);
	}
	for(int i=0;i<n;i++){
		int x=a[i]/gcd;
		for(int j=0;j<ind && p[j]*p[j]<=x;j++){
			if(x%p[j]==0) mp2[p[j]]++;
			while(x%p[j]==0){
				x/=p[j];
			}
		}
		if(x>1) mp2[x]++;
	}
	auto it=mp2.begin();
	int f=0;
	while(it!=mp2.end()){
		if(it->second>1){
			f=1;
			break;
		}
		it++;
	}
	if(f) printf("NO\n");
	else printf("YES\n");
}