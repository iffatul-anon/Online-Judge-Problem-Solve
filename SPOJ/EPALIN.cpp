#include <bits/stdc++.h>
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

signed main() {
	initHash();
	string s;
	while (cin >> s) {
		RangeHash machine(s, 1);
		int n = s.size(), x, ans, c1, c2;
		if (n % 2) {
			x = n - (n / 2);
			c1 = machine.get(n / 2, n - 1);
			c2 = machine.getReverse(0, n / 2);
		}
		if (n % 2 && c1 == c2) {
			cout << s << "\n";
		}
		else {
			for (int i = (n + 1) / 2; i < n; i++) {
				x = n - i;
				c1 = machine.get(i, n - 1);
				c2 = machine.getReverse(i - x, i - 1);
				if (c1 == c2) {
					ans = i - x;
					break;
				}
				c1 = machine.get(i, n - 1);
				c2 = machine.getReverse(i - x + 1, i);
				if (c1 == c2) {
					ans = i - x + 1;
					break;
				}
			}
			cout << s;
			for (int i = ans - 1; i >= 0; i--) cout << s[i];
			cout << '\n';
		}
	}
	return 0;
}