#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,m,x=0,y=0;
        scanf("%lld %lld",&n,&m);
        vector<int> graph[n+1];
        map<int,int>mp;
        map<int,int>:: iterator it;
        for(int i=0;i<m;i++){
            int v1,v2;
            scanf("%lld %lld",&v1,&v2);
            graph[v1].push_back(v2);
            graph[v2].push_back(v1);
        }
        for(int i=1;i<=n;i++){
            mp[graph[i].size()]++;
        }
        it=mp.begin();
        it++;
        while(it!=mp.end()){
            if(it->second==1) x=it->first;
            else y=it->first;
            it++;
        }
        if(x==0) x=y;
        printf("%lld %lld\n",x,y-1);
    }
}