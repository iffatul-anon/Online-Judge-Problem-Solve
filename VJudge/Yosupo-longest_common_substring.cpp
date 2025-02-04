#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<numeric>
#include<array>
using namespace std;
const int MOD=1e9+7;

//fahimcp495
array<vector<int>, 2> get_sa(string& s, int lim=128) {  // for integer, just change string to vector<int> and minimum value of vector must be >= 1
  int n = s.size() + 1, k = 0, a, b;
  vector<int> x(begin(s), end(s)+1), y(n), sa(n), lcp(n), ws(max(n, lim)), rank(n);
  x.back() = 0;
  iota(begin(sa), end(sa), 0);
  for (int j = 0, p = 0; p < n; j = max(1, j * 2), lim = p) {
    p = j, iota(begin(y), end(y), n - j);
    for (int i = 0; i < n; ++i) if (sa[i] >= j) y[p++] = sa[i] - j;
    fill(begin(ws), end(ws), 0);
    for (int i = 0; i < n; ++i) ws[x[i]]++;
    for (int i = 1; i < lim; ++i) ws[i] += ws[i - 1];
    for (int i = n; i--;) sa[--ws[x[y[i]]]] = y[i];
    swap(x, y), p = 1, x[sa[0]] = 0;
    for (int i = 1; i < n; ++i) a = sa[i - 1], b = sa[i], x[b] =
      (y[a] == y[b] && y[a + j] == y[b + j]) ? p - 1 : p++;
  }
  for (int i = 1; i < n; ++i) rank[sa[i]] = i;
  for (int i = 0, j; i < n - 1; lcp[rank[i++]] = k)
    for (k && k--, j = sa[rank[i] - 1]; s[i + k] == s[j + k]; k++);
  sa.erase(sa.begin()), lcp.erase(lcp.begin());
  return {sa, lcp};
}

signed main(){
    string s1,s2,s3;
    cin>>s1>>s2;
    s3+=s1+'#'+s2;
    int n=s3.size(),maxi=0,a=0,b=0,c=0,d=0;
    auto [suffixArray, lcpArray] = get_sa(s3);
    for(int i=1;i<n;i++){
        if(lcpArray[i]>maxi && ((suffixArray[i-1]<s1.size() && suffixArray[i]>s1.size()) || (suffixArray[i-1]>s1.size() && suffixArray[i]<s1.size()))) {
            maxi=lcpArray[i];
            if(suffixArray[i-1]<suffixArray[i]){
                a=suffixArray[i-1];
                b=a+maxi;
                c=suffixArray[i]-s1.size()-1;
                d=c+maxi;
            }
            else{
                a=suffixArray[i];
                b=a+maxi;
                c=suffixArray[i-1]-s1.size()-1;
                d=c+maxi;
            }
        }
    }
    cout<<a<<' '<<b<<' '<<c<<' '<<d<<endl;
}