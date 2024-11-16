#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <cstring>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,b,c;
        cin>>n>>b>>c;
        if(c>=n) cout<<n<<'\n';
        else if(b==0 && c>=n-2) cout<<n-1<<'\n';
        else if(b==0) cout<<-1<<'\n';
        else{
            int m=n-c-1;
            cout<<n-((m/b)+1)<<'\n';
        }
    }
}