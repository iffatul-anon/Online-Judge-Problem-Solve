#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int h1,m1,s1,h2,m2,s2;
        scanf("%lld %lld %lld %lld %lld %lld",&h1,&m1,&s1,&h2,&m2,&s2);
        if(h1<h2) printf("Player1\n");
        else if(h1>h2) printf("Player2\n");
        else{
            if(m1<m2) printf("Player1\n");
            else if(m1>m2) printf("Player2\n");
            else{
                if(s1<s2) printf("Player1\n");
                else if(s1>s2) printf("Player2\n");
                else printf("Tie\n");
            }
        }
    }
}
