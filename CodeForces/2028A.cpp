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
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,a,b;
        scanf("%lld %lld %lld",&n,&a,&b);
        string s;
        cin >> s;
        int f=1000,x=0,y=0,i=0,f1=0;
        while(f){
            if(s[i]=='N') y++;
            if(s[i]=='E') x++;
            if(s[i]=='S') y--;
            if(s[i]=='W') x--;
            i++;
            if(x==a && y==b){
                f1=1;
                break;
            }
            if(i==n){
                i=0;
                f--;
            }
        }
        if(f1) printf("YES\n");
        else printf("NO\n");
    }
}