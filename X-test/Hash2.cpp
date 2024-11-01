class Solution {
public:
    typedef long long ll;

    constexpr static int N = 500010;
    static const int MOD = 1e9 + 7;
    const ll P[2] = {97, 1000003};

    // Function for modular exponentiation
    ll bigMod(ll a, ll e) {
        if (e == -1)
            e = MOD - 2;
        ll ret = 1;
        while (e) {
            if (e & 1)
                ret = ret * a % MOD;
            a = a * a % MOD, e >>= 1;
        }
        return ret;
    }

    static ll pwr[2][N], inv[2][N];

    // Initialize power and inverse arrays
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

    // Hashing structure for range queries
    struct RangeHash {
        vector<ll> h[2], rev[2];

        // Constructor to initialize forward and reverse hashes
        RangeHash(const string S, bool revFlag = 0) {
            for (int it = 0; it < 2; ++it) {
                h[it].resize(S.size() + 1, 0);
                for (int i = 0; i < S.size(); ++i) {
                    h[it][i + 1] =
                        (h[it][i] + Solution::pwr[it][i + 1] * (S[i] - 'a' + 1)) % Solution::MOD;
                }
                if (revFlag) {
                    rev[it].resize(S.size() + 1, 0);
                    for (int i = 0; i < S.size(); ++i) {
                        rev[it][i + 1] =
                            (rev[it][i] + Solution::inv[it][i + 1] * (S[i] - 'a' + 1)) % Solution::MOD;
                    }
                }
            }
        }

        // Get the hash value for a substring
        inline ll get(int l, int r) {
            ll one = (h[0][r + 1] - h[0][l]) * Solution::inv[0][l + 1] % Solution::MOD;
            ll two = (h[1][r + 1] - h[1][l]) * Solution::inv[1][l + 1] % Solution::MOD;
            if (one < 0)
                one += Solution::MOD;
            if (two < 0)
                two += Solution::MOD;
            return one << 31 | two;
        }

        // Get the reverse hash for a substring
        inline ll getReverse(int l, int r) {
            ll one = (rev[0][r + 1] - rev[0][l]) * Solution::pwr[0][r + 1] % Solution::MOD;
            ll two = (rev[1][r + 1] - rev[1][l]) * Solution::pwr[1][r + 1] % Solution::MOD;
            if (one < 0)
                one += Solution::MOD;
            if (two < 0)
                two += Solution::MOD;
            return one << 31 | two;
        }
    };

    // Main function to find beautiful indices
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        initHash(); // Initialize the power arrays
        RangeHash machine1(s);
        RangeHash machine2(a);
        RangeHash machine3(b);
        int l1 = s.size(), l2 = a.size(), l3 = b.size();

        return v1; 
    }
};

// Initialize static member arrays
Solution::ll Solution::pwr[2][N];
Solution::ll Solution::inv[2][N];
