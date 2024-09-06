#include<iostream>
#include<algorithm>
#include<vector>
#define int long long
using namespace std;
const int N =2e5+10;
vector<int> graph[N];
bool vis[N];
bool dfs(int vertex,int p){
    vis[vertex] = true;
    bool ans=false;
    for(int child : graph[vertex]){
        if(vis[child] && child==p) continue;
        if(vis[child]) return true;
        ans|=dfs(child,vertex);
    }
    return ans;
}
signed main(){
    int n,m,u,v;
    scanf("%lld %lld",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%lld %lld",&u,&v);
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    bool ans=false;
    for(int i=1;i<=n;i++){
        if(vis[i]) continue;
        if(dfs(i,0)){
            ans=true;
            break;
        }
    }
    if(ans) printf("NO\n");
    else printf("YES\n");
    
}