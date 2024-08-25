#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    cin.ignore();  // To ignore newline character after the integer input
    while(t--){
        vector<int> a;
        string s;
        getline(cin, s);  // Safely reading the input line
        stringstream ss(s);
        int num;
        // Parsing numbers from the input string
        while(ss >> num) a.push_back(num);

        sort(a.begin(), a.end());
        int n = a.size();
        if(a[n-1] == n-1) printf("%lld\n", a[n-2]);
        else printf("%lld\n", a[n-1]);
    }
}
