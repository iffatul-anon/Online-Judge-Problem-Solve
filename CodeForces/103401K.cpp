#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void solve(){
    int n,x,y,z,mx=0,a[3];
    cin>>n;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(i>2){
                if(i%2==0){
                    x=2*(n/i);
                    y=(n-x)/2;
                    z=y;
                }
                else{
                    x=n/i;
                    y=(n-x)/2;
                    z=y;
                }
                int g=gcd(x,y)+gcd(y,z)+gcd(z,x);
                if(g>mx){
                    mx=g;
                    a[0]=x;
                    a[1]=y;
                    a[2]=z;
                }
            }
            if((n/i)>2){
                if((n/i)%2==0){
                    x=2*i;
                    y=(n-x)/2;
                    z=y;
                }
                else{
                    x=i;
                    y=(n-x)/2;
                    z=y;
                }
                int g=gcd(x,y)+gcd(y,z)+gcd(z,x);
                if(g>mx){
                    mx=g;
                    a[0]=x;
                    a[1]=y;
                    a[2]=z;
                }
            }
        }
    }
    sort(a,a+3);
    cout<<a[0]<<' '<<a[1]<<' '<<a[2]<<endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int tcase = 1;
    cin>>tcase;
    for(int tc = 1; tc<=tcase; tc++){
        solve();
    }
}
