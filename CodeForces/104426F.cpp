#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"

void solve() {
    int n, k, co = 0;
    cin >> n >> k;
    int a[n], b[n], m = 0, c[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i <= n - k; i++) {
        if (i == 0) c[i] = 0;
        else c[i] = c[i - 1];
        if (i > 0 && i < k) {
            if (c[i - 1] % 2) a[i] = 1 - a[i];
        }
        else if (i >= k) {
            if ((c[i - 1] - c[i - k]) % 2) a[i] = 1 - a[i];
        }
        if (a[i] == 0) {
            a[i] = 1;
            b[m++] = i + 1;
            c[i]++;
        }
    }
    for (int i = n - k + 1; i < n; i++) {
        c[i] = c[i - 1];
        if (i > 0 && i < k) {
            if (c[i - 1] % 2) {
                a[i] = 1 - a[i];
            }
        }
        else {
            if ((c[i - 1] - c[i - k]) % 2) {
                a[i] = 1 - a[i];
            }
        }
    }
    for (int i = n - k; i < n; i++) {
        if (a[i] == 0) co++;
    }
    if (co > k / 2) {
        b[m++] = n - k + 1;
    }
    cout << m << '\n';
    for (int i = 0; i < m; i++) cout << b[i] << ' ';
    cout << '\n';
}


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tcase = 1;
    // cin>>tcase;
    for (int tc = 1; tc <= tcase; tc++) {
        solve();
    }
}