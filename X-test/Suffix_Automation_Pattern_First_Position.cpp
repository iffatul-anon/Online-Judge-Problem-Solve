#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <cstring>
using namespace std;

const int N = 1e5 + 5;

int len[2*N], lnk[2*N], last, sz = 1, lastPos[2 * N];
unordered_map < char, int > to[2*N];

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
    lastPos[cur] = len[cur];
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

signed main() {
    // init();
    memset(lnk, -1, sizeof lnk);
    string s;
    cin >> s;
    for (char c: s) {
        add(c);
    }
    int k;
    cin >> k;
    while(k--){
        string p;
        cin >> p;
        int cur = 0,f=1;
        for(int i=0;i<p.size();i++){
            if(to[cur][p[i]]){
                cur = to[cur][p[i]];
            }
            else{
                f=0;
                break;
            }
        }
        if(f) cout << lastPos[cur] - p.size() + 1 << "\n";
        else cout << "-1\n";
    }

}