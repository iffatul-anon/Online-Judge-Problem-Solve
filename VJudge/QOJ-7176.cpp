#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,lp=0,sum=0,c,ans=0;
	cin>>n;
	for(int i=1970;i<n;i++){
		if((i%4==0 && i%100!=0) || i%400==0) lp++;
	}
	sum=((n-1970)*365)+lp+1;
	c=sum%7;
	if(c==0) c=7;
	int ok=0;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if((n%4==0 && n%100!=0) || n%400==0) a[1]=29;
	while(ok<12){
		int f=a[ok++];
		while(f>0){
			ans++;
			if(c==1) f-=4;
			else if(c==2) f-=3;
			else if(c==3) f-=2;
			else if(c==4) f-=1;
			else if(c==5) f-=7;
			else if(c==6) f-=6;
			else if(c==7) f-=5;
			c=5;
			if(f<=0){
				if(f==0) c=5;
				else if(f==-1) c=4;
				else if(f==-2) c=3;
				else if(f==-3) c=2;
				else if(f==-4) c=1;
				else if(f==-5) c=7;
				else if(f==-6) c=6;
			}
		}
	}
	cout<<ans<<endl;

}
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tcase = 1;
	for(int tc = 1; tc<=tcase; tc++){
		solve();
	}
}