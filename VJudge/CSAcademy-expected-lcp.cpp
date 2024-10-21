#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#include <iomanip>

using namespace std;

const int N = 2e5+5;
const int A = 26;

int trie[N][A], pc[N], wc[N], tot = 1, root;

void init() {
  pc[tot] = wc[tot] = 0;
  root = tot;
}

void add(string &s) {
  int u = root;
  pc[u]++;
  for (auto c: s) {
    int f = c - 'a';
    if (!trie[u][f])  trie[u][f] = ++tot;
    u = trie[u][f];
    pc[u]++;
  }
  wc[u]++;
}

int prefCount(string &s) {
  int u = root, ret = 0;
  for (auto c: s) {
    int f = c - 'a';
    if (!trie[u][f])  return 0;
    u = trie[u][f];
  }
  return pc[u];
}

int wordCount(string &s) {
  int u = 1, ret = 0;
  for (auto c: s) {
    int f = c - 'a';
    if (!trie[u][f])  return 0;
    u = trie[u][f];
  }
  return wc[u];
}

signed main(){
    long long n;
    scanf("%lld",&n);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        add(s);
    }
    double ans=0;
    for(int i=1;i<=tot;i++){
        ans+=(pc[i]*(pc[i]-1))/2;
    }
    double ans2=ans/((n*(n-1))/2);
    cout<<fixed<<setprecision(6)<<ans2<<endl;
}