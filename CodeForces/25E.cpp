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
 
int ok(int l1, RangeHash& machine1,int l2,  RangeHash& machine2,int l3, RangeHash& machine3){
    int c=l1,f=0;
    for(int i=0;i<l1;i++){
        int x=l1-i;
        if(x>=l2){
            if(machine1.get(i,i+l2-1)==machine2.get(0,l2-1)){
                f=l2;
                break;
            }
        }
        else{
            if(machine1.get(i,l1-1)==machine2.get(0,x-1)){
                f=x;
                break;
            }
        }
    }
    c+=l2-f;
    if(f==l2){
        f=0;
        for(int i=0;i<l1;i++){
            int x=l1-i;
            if(x>=l3){
                if(machine1.get(i,i+l3-1)==machine3.get(0,l3-1)){
                    f=l3;
                    break;
                }
            }
            else{
                if(machine1.get(i,l1-1)==machine3.get(0,x-1)){
                    f=x;
                    break;
                }
            }
        }
        c+=l3-f;
    }
    else{
        f=0;
        for(int i=0;i<l2;i++){
            int x=l2-i;
            if(x>=l3){
                if(machine2.get(i,i+l3-1)==machine3.get(0,l3-1)){
                    f=l3;
                    break;
                }
            }
            else{
                if(machine2.get(i,l2-1)==machine3.get(0,x-1)){
                    f=x;
                    break;
                }
            }
        }
        c+=l3-f;
    }
    return c;
}

signed main(){
  initHash();
  string s1,s2,s3; 
  cin >> s1 >> s2 >> s3;
  int len1 = s1.size(), len2 = s2.size(), len3 = s3.size();
  RangeHash machine1(s1);
  RangeHash machine2(s2);
  RangeHash machine3(s3);
  int mn=ok(len1, machine1, len2, machine2, len3, machine3);
  mn=min(mn,ok(len1, machine1, len3, machine3, len2, machine2));
  mn=min(mn,ok(len2, machine2, len1, machine1, len3, machine3));
  mn=min(mn,ok(len2, machine2, len3, machine3, len1, machine1));
  mn=min(mn,ok(len3, machine3, len1, machine1, len2, machine2));
  mn=min(mn,ok(len3, machine3, len2, machine2, len1, machine1));
  cout<<mn<<endl;
}
