#include<iostream>
#include<algorithm>
#include<vector>
#define int long long
using namespace std;
const int N =2e5+10;
vector<int> graph[N];
bool vis[N];
int mx=0;
void dfs(int vertex,int c){
    c++;
    if(c>mx) mx=c;
    vis[vertex] = true;
    for(int child : graph[vertex]){
        if(vis[child]) continue;
        dfs(child,c);
    }
    return;
}
signed main(){
    int n,u;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++){
        scanf("%lld",&u);
        if(u!=-1) graph[u].push_back(i);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) vis[j]=0;
        dfs(i,0);
    }
    printf("%lld\n",mx);
}