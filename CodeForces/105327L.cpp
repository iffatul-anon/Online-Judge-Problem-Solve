#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n;
    scanf("%lld",&n);
    int a[n],x,y,c,b[n];
    map<int,int>mp;
    for(int i=0;i<40;i++) mp[i]=0;
    for(int i=0;i<n;i++) {
        scanf("%lld",&a[i]);
        x=a[i];
        c=0;
        while(x){
            mp[c++]+=x%2;
            x/=2;
        }
    }
    for(int i=0;i<n;i++){
        x=0;
        y=1;
        for(int j=0;j<40;j++){
            if(mp[j]){
                x+=y;
                mp[j]--;
            }
            y*=2;
        }
        b[i]=x;
    }
    for(int i=0;i<n;i++) printf("%lld ",b[i]);
    printf("\n");
}