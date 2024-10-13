#include<iostream>
#include<algorithm>
#include<vector>
#define int long long
using namespace std;
const int MOD=1e9;
vector<vector<int> > multiply(vector<vector<int> > &a, vector<vector<int> > &b){
    int sz = a.size();
    vector<vector<int> > ans(sz,vector<int>(sz,0));
    for(int i=0;i<sz;i++){
        for(int j=0;j<sz;j++){
            for(int k=0;k<sz;k++){
                ans[i][j] = (ans[i][j]+(a[i][k]*b[k][j])%MOD)%MOD;

            }
        }
    }
    return ans;
}
vector<vector<int> >matrixExpo(vector<vector<int> >&a,int n){
    if(n==0){
        int sz = a.size();
        vector<vector<int> > ans(sz,vector<int>(sz,0));
        for(int i=0;i<sz;i++){
            ans[i][i] = 1;
        }
        return ans;
    }
    if(n==1) return a;
    vector<vector<int> > half = matrixExpo(a,n/2);
    vector<vector<int> > ans = multiply(half,half);
    if(n%2) ans=multiply(ans,a);
    return ans;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int k,n;
        cin>>k;
        vector<int> b(k),c(k);
        for(int i=0;i<k;i++) cin>>b[i];
        for(int i=0;i<k;i++) cin>>c[i];
        cin>>n;
        if(n<=k) cout<<b[n-1]<<endl;
        else{
            vector<vector<int> > a(k,vector<int>(k,0));
            for(int i=0;i<k;i++) a[i][0]=c[i];
            for(int j=0;j<k-1;j++) a[j][j+1]=1;
            vector<vector<int> > ans = matrixExpo(a,n-k);
            int anon=0;
            for(int i=0;i<k;i++) anon = (anon + ans[i][0]*b[k-i-1])%MOD;
            cout<<anon<<endl;
        }
    }
}