#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	int a[5],b[4];
	for(int i=0;i<5;i++) scanf("%lld",&a[i]);
	for(int i=0;i<4;i++) scanf("%lld",&b[i]);
	for(int i=0;i<5;i++) {
		int f=0;
		for(int j=0;j<4;j++){
			if(a[i]==b[j]) f=1;
		}
		if(f==0){
			cout<<a[i]<<endl;
			break;
		}
	}
}