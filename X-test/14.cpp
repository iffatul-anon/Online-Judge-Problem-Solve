#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

typedef long long ll;

const int N = 1000010;
const int MOD = 1e9 + 7;
const ll P[] = {97, 1000003};

ll bigMod (ll a, ll e) {
  if (e == -1) e = MOD - 2;
  ll ret = 1;
  while (e) {
    if (e & 1) ret = ret * a % MOD;
    a = a * a % MOD, e >>= 1;
  }
  return ret;
}

ll pwr[2][N], inv[2][N];

void initHash() {
  for (int it = 0; it < 2; ++it) {
    pwr[it][0] = inv[it][0] = 1;
    ll INV_P = bigMod(P[it], -1);
    for (int i = 1; i < N; ++i) {
      pwr[it][i] = pwr[it][i - 1] * P[it] % MOD;
      inv[it][i] = inv[it][i - 1] * INV_P % MOD;
    }
  }
}

struct RangeHash {
  vector <ll> h[2], rev[2];

  RangeHash (const string S, bool revFlag = 0) {
    for (int it = 0; it < 2; ++it) {
      h[it].resize(S.size() + 1, 0);
      for (int i = 0; i < S.size(); ++i) {
        h[it][i + 1] = (h[it][i] + pwr[it][i + 1] * (S[i] - 'a' + 1)) % MOD;
      }
      if (revFlag) {
        rev[it].resize(S.size() + 1, 0);
        for (int i = 0; i < S.size(); ++i) {
          rev[it][i + 1] = (rev[it][i] + inv[it][i + 1] * (S[i] - 'a' + 1)) % MOD;
        }
      }
    }
  }

  inline ll get (int l, int r) {
    ll one = (h[0][r + 1] - h[0][l]) * inv[0][l + 1] % MOD;
    ll two = (h[1][r + 1] - h[1][l]) * inv[1][l + 1] % MOD;
    if (one < 0) one += MOD; if (two < 0) two += MOD;
    return one << 31 | two;
  }

  inline ll getReverse (int l, int r) {
    ll one = (rev[0][r + 1] - rev[0][l]) * pwr[0][r + 1] % MOD;
    ll two = (rev[1][r + 1] - rev[1][l]) * pwr[1][r + 1] % MOD;
    if (one < 0) one += MOD; if (two < 0) two += MOD;
    return one << 31 | two;
  }
};

bool compare_part(RangeHash& machine, int i,int n,int mid){
  int x=mid/2;
  if(mid%2){
    if(i-x<0 || i+x>=n) return false;
    if(machine.getReverse(i-x,i)==machine.get(i,i+x)) return true;
    else return false;
  }
  else{
    if(i-(x-1)<0 || i+x>=n) return false;
    if(machine.getReverse(i-(x-1),i)==machine.get(i+1,i+x)) return true;
    else return false;
  }
}

signed main(){
  initHash();
  string s; 
  cin >> s;
  int len = s.size(),x=0,y=0,maxi=0;
  RangeHash machine(s);
  for(int i=1;i<len-1;i++){
      int l=1,r=len;
      while(l<=r){
        int mid=(l+r)/2;
        if(compare_part(machine,i,len,mid)){
          l=mid+1;
        }
        else{
          r=mid-1;
        }
      }
      if(r>maxi){
        maxi=r;
        x=i-(r/2);
      }
  }
  if(maxi==0) maxi++;
  string s2=s.substr(x,maxi);
  cout<<s2<<endl;
}