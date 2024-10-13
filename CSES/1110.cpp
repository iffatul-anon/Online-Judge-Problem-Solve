#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

typedef long long ll;

const int N = 2000010;
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

signed main(){
  initHash();
  string s; 
  cin >> s;
  int len = s.size(),x=0;
  s+=s;
  RangeHash machine(s);
  for(int i=0;i<len;i++){
    if(s[i]!=s[x]){
      if(s[i]<s[x]) x=i;
    }
    else if(machine.get(i,i+len-1)!=machine.get(x,x+len-1)){
      int l=0,r=len-1;
      while(l<=r){
        int mid=(l+r)/2;
        if(machine.get(i,i+mid-1)==machine.get(x,x+mid-1)){
          l=mid+1;
        }
        else{
          r=mid-1;
        }
      }
      if(s[i+r]<s[x+r]) x=i;
    }
  }
  s=s.substr(x,len);
  cout<<s<<endl;
}