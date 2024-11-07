#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <cstring>
using namespace std;

const int N = 1e5 + 5;

int len[2*N], lnk[2*N], last, sz = 1;
unordered_map < char, int > to[2*N];

vector<int> nodes[2 * N];
long long cnt[2 * N], dp[2 * N], dp2[2*N];
//cnt te substring occurence count
//dp te all substring count
//dp2 te distinct substring count

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

void all_substr() {
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

void distinct_substr() {
  for (int u = 0; u < sz; ++u) {
    nodes[len[u]].emplace_back(u);
  }

  for (int u = 1; u < sz; ++u) {
    dp2[u] = 1;
  }
 
  for (int l = sz - 1; l >= 0; --l) {
    for (auto u: nodes[l]) {
      for (auto [c, v]: to[u]) {
        dp2[u] += dp2[v];
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

    all_substr();
    // cout << dp[0] << endl;
    
    // distinct_substr();
    // cout << dp2[0]  << endl;

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

            //distinct
            // if(to[cur][c] && sum+dp2[to[cur][c]]<k) {
            //     sum+=dp2[to[cur][c]];
            // }

            //all
            if(to[cur][c] && sum+dp[to[cur][c]]<k) {
                sum+=dp[to[cur][c]];
            }

            else if(to[cur][c]) {
                s2+=c;

                //distinct
                // sum+=1;

                //all
                sum+=cnt[to[cur][c]];

                cur=to[cur][c];
                break;
            }
        }
    }
    cout<<s2<<endl;
}