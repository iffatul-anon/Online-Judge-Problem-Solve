#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> manacher_odd(string &s){
    int n = s.size();
    s = "$" + s + "^";
    vector<int> p(n + 2);
    int l = 1, r = 1;
    for (int i = 1; i <= n; i++){
        p[i] = max(0, min(r - i, p[l + (r - i)]));
        while (s[i - p[i]] == s[i + p[i]]){
            p[i]++;
        }
        if (i + p[i] > r){
            l = i - p[i], r = i + p[i];
        }
    }
    return p;
}

signed main()
{
    string s;
    cin >> s;
    string t = "";
    for (auto i : s){
        t += string("#") + i;
    }
    t += '#';

    // cout<<t<<N;

    vector<int> p = manacher_odd(t);
}