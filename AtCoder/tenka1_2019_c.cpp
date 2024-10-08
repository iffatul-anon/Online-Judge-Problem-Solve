#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n,x,y,c3=0,c5=0,mn=10000000000;
    scanf("%lld",&n);
    char s[n+1];
    scanf("%s",s);
    for(int i=0;i<n;i++){
        if(s[i]=='.') c3++;
        //else c4++;
    }
    mn=c3;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            c3--;
        }
        else{
            c5++;
        }
        if(c3+c5<mn) mn=c3+c5;
    }
    printf("%lld\n",mn);

}
