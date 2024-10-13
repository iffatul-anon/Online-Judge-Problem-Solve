#include<iostream>
#include<algorithm>
#include<vector>
#define int long long
using namespace std;
const int MOD=1e9+7;
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
    int n,rc=2;
    cin>>n;
    vector<vector<int> > a(rc,vector<int>(rc,0));
    // a[0][0]=a[0][1]=a[1][0]=1;
    // a[1][1]=0;
    vector<vector<int> > ans = matrixExpo(a,n);
    //cout<<ans[0][1]<<endl;
}