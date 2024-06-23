#include<iostream>
#include<algorithm>
#include<map>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,m,c=0,x=-1,y=-1,x2=-1,y2=-1;
        scanf("%lld %lld",&n,&m);
        char s[n+1][m+1];
        for(int i=0;i<n;i++) scanf("%s",s[i]);
        for(int i=0;i<n;i++){
            c=0;
            for(int j=0;j<m;j++) if(s[i][j]=='#') c++;
            if(c==1 && x==-1) x=i+1;
            else if(c==1) y=i+1;
        }
        for(int i=0;i<m;i++){
            c=0;
            for(int j=0;j<n;j++) if(s[j][i]=='#') c++;
            if(c==1 && x2==-1) x2=i+1;
            else if(c==1) y2=i+1;
        }
        if(y==-1) printf("%lld %lld\n",x,x2);
        else printf("%lld %lld\n",(x+y)/2,(x2+y2)/2);
    }
}