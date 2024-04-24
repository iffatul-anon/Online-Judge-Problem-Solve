#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main() {
    int t;
    string s1,s2;
    scanf("%d",&t);
    getline(cin,s1);
    for(int i=1;i<=t;i++){
        getline(cin,s1);
        getline(cin,s2);
        
        transform(s1.begin(),s1.end(),s1.begin(),::tolower);
        transform(s2.begin(),s2.end(),s2.begin(),::tolower);
        
        s1.erase(remove(s1.begin(), s1.end(), ' '), s1.end());
        s2.erase(remove(s2.begin(), s2.end(), ' '), s2.end());

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        if (s1 == s2) cout << "Case " << i << ": Yes\n";
        else cout << "Case " << i << ": No\n";
    }
}
