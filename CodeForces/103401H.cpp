#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define int long long
#define endl '\n'

void solve(){
    int n,mx=-1,x;
    cin>>n;
    int a[n+1][n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                if(i+k>n || j+k>n) break;
                x=-1;
                if(a[i][j]==a[i+k][j] && a[i][j]==a[i][j+k] && a[i][j]<a[i+k][j+k]) x=a[i][j];
                else if(a[i][j]==a[i+k][j] && a[i][j]==a[i+k][j+k] && a[i][j]<a[i][j+k]) x=a[i][j];
                else if(a[i][j]==a[i][j+k] && a[i][j]==a[i+k][j+k] && a[i][j]<a[i+k][j]) x=a[i][j];
                else if(a[i+k][j+k]==a[i+k][j] && a[i+k][j+k]==a[i][j+k] && a[i][j]>a[i+k][j+k]) x=a[i+k][j+k];
                if(x>mx) mx=x;
            }
        }
    }
    cout<<mx<<endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int tcase = 1;
    // cin>>tcase;
    for(int tc = 1; tc<=tcase; tc++){
        solve();
    }
}



