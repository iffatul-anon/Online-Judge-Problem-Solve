#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <cstring>
using namespace std;

const int N = 1e5 + 5;

int len[2 * N], lnk[2 * N], last, sz = 1, lastPos[2 * N];
unordered_map < char, int > to[2 * N];
// len te max length of substring at node u
// lastPos te pattern ending position
// last te full string position

vector < int > nodes[2 * N];
long long cnt[2 * N], dp[2 * N];
//cnt te occurrence count for each substring represented by a state
//dp te all substring count

void init() {
    memset(len, 0, sizeof(len));
    memset(lnk, -1, sizeof(lnk));
    memset(lastPos, 0, sizeof(lastPos));
    memset(cnt, 0, sizeof(cnt));
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < sz; i++) {
        to[i].clear();
        nodes[i].clear();
    }
    last = 0;
    sz = 1;
}

void add(char c) {
    int cur = sz++;
    len[cur] = len[last] + 1;
    lastPos[cur] = len[cur];
    cnt[cur] = 1;
    int u = last;
    while (u != -1 and !to[u].count(c)) {
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
            len[w] = len[u] + 1;
            lnk[w] = lnk[v];
            to[w] = to[v];
            lastPos[w] = lastPos[v];
            while (u != -1 and to[u][c] == v) {
                to[u][c] = w;
                u = lnk[u];
            }
            lnk[cur] = lnk[v] = w;
        }
    }
    last = cur;
}

void count() {
    for (int u = 0; u < sz; ++u) {
        nodes[len[u]].emplace_back(u);
    }
    for (int l = sz - 1; l > 0; --l) {
        for (auto u: nodes[l]) {
            cnt[lnk[u]] += cnt[u];
        }
    }
}

void all_substr() {
    for (int u = 1; u < sz; ++u) {
        dp[u] = cnt[u]; // all substring count
        // dp[u] = 1; // distinct substring count
    }
    for (int l = sz - 1; l >= 0; --l) {
        for (auto u: nodes[l]) {
            for (auto[c, v]: to[u]) {
                dp[u] += dp[v];
            }
        }
    }
}

string kth_substr(long long k) {
    string s2 = "";
    long long cur = 0, sum = 0;
    while (sum < k) {
        for (char c = 'a'; c <= 'z'; c++) {
            if (to[cur][c] && sum + dp[to[cur][c]] < k) {
                sum += dp[to[cur][c]];
            }
            else if (to[cur][c]) {
                s2 += c;
                sum += cnt[to[cur][c]]; // all substring count
                // sum += 1; // distinct substring count
                cur = to[cur][c];
                break;
            }
        }
    }
    return s2;
}

long long substr_occurrence_count(string p) {
    int cur = 0;
    for (int i = 0; i < p.size(); i++) {
        if (to[cur][p[i]]) cur = to[cur][p[i]];
        else return -1;
    }
    return cnt[cur];
}

long long substr_first_occurance_position(string p) {
    int cur = 0;
    for (int i = 0; i < p.size(); i++) {
        if (to[cur][p[i]]) cur = to[cur][p[i]];
        else return -1;
    }
    return lastPos[cur] - p.size() + 1;
}

signed main() {
    init();
    string s;
    cin >> s;
    for (char c: s) {
        add(c);
    }
    count();
    
    int k;
    cin >> k;
    while(k--){
        string p;
        cin >> p;
        cout << substr_first_occurance_position(p) << endl;
    }

    // long long k;
    // cin >> k;
    // all_substr();
    // cout << dp[0] << endl;
    // cout << kth_substr(k) << endl;

    // string p;
    // cin >> p;
    // cout << substr_occurrence_count(p) << endl;
    // cout << substr_first_occurance_position(p) << endl;

}