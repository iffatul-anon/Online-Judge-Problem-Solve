#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#include <iomanip>

using namespace std;

const int N = 2e6+5;
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
    long long n,q;
    string s;
    scanf("%lld %lld",&n,&q);
    for(int i=0;i<n;i++){
        cin>>s;
        add(s);
    }
    while(q--){
        cin>>s;
        cout<<prefCount(s)<<endl;
    }
}