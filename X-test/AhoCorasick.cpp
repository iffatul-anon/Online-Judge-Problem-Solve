#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <queue>
#include <tuple>
#include <cassert>
#include <bitset>
#include <iomanip>
#include <cctype>
using namespace std;

const int N = 1e6 + 5, A = 26;
int to[N][A], node[N], tot=1, dp[N], slnk[N];
vector<int> order;

void add(string &p, int i) {
    int u = 0;
    for (char c : p) {
        c -= 'a';
        if (!to[u][c]) to[u][c] = tot++;
        u = to[u][c];
    }
    node[i] = u;
}

void build() {
    queue<int> q;
    q.push(0);
    while (!q.empty()) {
        int u = q.front(); q.pop();
        order.push_back(u);
        for (int c = 0; c < A; ++c) {
            int v = to[u][c];
            if (!v) continue;
            q.push(v);
            if (!u) continue;
            int cur = slnk[u];
            while (cur && !to[cur][c]) cur = slnk[cur];
            slnk[v] = to[cur][c];
        }
    }
}

void trav(string &s) {
    int u = 0;
    for (int i = 0; i < s.size(); ++i) {
        int c = s[i] - 'a';
        while (u && !to[u][c]) u = slnk[u];
        u = to[u][c];
        dp[u]++;
    }

    // Process nodes in reverse order to propagate counts using suffix links
    reverse(order.begin(), order.end());
    for (int u : order) {
        dp[slnk[u]] += dp[u];
    }
}

signed main() {
    int t;
    cin>>t;
    for (int i = 1; i <= t; ++i) {

        cout << "Case " << i << ":" << endl;
        int n;
        cin>>n;
        string text;
        cin >> text;
        string s[n];

        // Add each pattern to the trie
        for (int i = 0; i < n; i++) {
            cin >> s[i];
            add(s[i], i);
        }

        // Build suffix links
        build();

        // Traverse the text to count pattern occurrences
        trav(text);

        // Output results for each pattern
        for (int i = 0; i < n; i++) {
            cout << dp[node[i]] << endl;
        }

        // Reset for each test case
        order.clear();
        fill(slnk, slnk + tot, 0);
        fill(node, node + tot, 0);
        fill(dp, dp + tot, 0);
        for (int j = 0; j < tot; ++j) {
            fill(to[j], to[j] + A, 0);
        }
        tot = 1;
    }
}
