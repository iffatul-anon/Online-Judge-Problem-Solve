#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <cstring>
using namespace std;

const int N = 2 * 1e5 + 5;

int len[N], lnk[N], last, sz = 1;
unordered_map < char, int > to[N];

vector<int> nodes[2 * N];
long long cnt[2 * N], dp[2 * N];

void init() {
    while (sz) {
        sz--;
        to[sz].clear();
    }
    last = 0, sz = 1;
}
void add(char c) {
    int cur = sz++;
    len[cur] = len[last] + 1;
    int u = last;
    while (u != -1 and!to[u].count(c)) {
        to[u][c] = cur;
        u = lnk[u];
    }
    if (u == -1) {
        lnk[cur] = 0;
    }
    else {
        int v = to[u][c];
        if (len[v] == len[u] + 1) {
            lnk[cur] = v;
        }
        else {
            int w = sz++;
            len[w] = len[u] + 1, lnk[w] = lnk[v], to[w] = to[v];
            while (u != -1 and to[u][c] == v) {
                to[u][c] = w;
                u = lnk[u];
            }
            lnk[cur] = lnk[v] = w;
        }
    }
    last = cur;
    cnt[cur] = 1;
}

void build() {
  for (int u = 0; u < sz; ++u) {
    nodes[len[u]].emplace_back(u);
  }
  for (int l = sz - 1; l > 0; --l) {
    for (auto u: nodes[l]) {
      cnt[lnk[u]] += cnt[u];
    }
  }
 
  for (int u = 1; u < sz; ++u) {
    dp[u] = cnt[u];
  }
 
  for (int l = sz - 1; l >= 0; --l) {
    for (auto u: nodes[l]) {
      for (auto [c, v]: to[u]) {
        dp[u] += dp[v];
      }
    }
  }
}

signed main() {
    // init();
    memset(lnk, -1, sizeof lnk);
    string s;
    cin >> s;
    for (char c: s) {
        add(c);
    }
    build();
    long long k,n=s.size();
    cin>>k;
    if(k>(n*(n+1))/2) {
        cout<<"No such line.\n";
        return 0;
    }
    string s2="";
    long long cur=0,sum=0;
    while(sum<k){
        for(char c='a';c<='z';c++) {
            if(to[cur][c] && sum+dp[to[cur][c]]<k) {
                sum+=dp[to[cur][c]];
            }
            else if(to[cur][c]) {
                s2+=c;
                sum+=cnt[to[cur][c]];
                cur=to[cur][c];
                break;
            }
        }
    }
    cout<<s2<<endl;
}