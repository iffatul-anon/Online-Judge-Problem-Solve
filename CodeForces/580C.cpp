#include<iostream>
#include<algorithm>
#include<vector>
#define int long long
using namespace std;
const int N =2e5+10;
vector<int> graph[N];
bool vis[N];
int mx=0,m;
int a[N];
void dfs(int vertex,int c){
    if(a[vertex]) c++;
    else c=0;
    if(c>m) return;
    if(graph[vertex].size()==1 && vertex!=1) mx++;
    vis[vertex] = true;
    for(int child : graph[vertex]){
        if(vis[child]) continue;
        dfs(child,c);
    }
    return;
}
signed main(){
    int n,u,v;
    scanf("%lld %lld",&n,&m);
    for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
    for(int i=1;i<n;i++){
        scanf("%lld %lld",&u,&v);
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1,0);
    printf("%lld\n",mx);
}