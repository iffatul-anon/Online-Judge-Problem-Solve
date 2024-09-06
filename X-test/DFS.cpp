#include<iostream>
#include<algorithm>
#include<vector>
#define int long long
using namespace std;
const int N =2e5+10;
vector<int> graph[N];
bool vis[N];
 
void dfs(int vertex){
    vis[vertex] = true;

    for(int child : graph[vertex]){
        if(vis[vertex]) continue;

        dfs(child);

    }

}

signed main(){
    int n,m;
    scanf("%lld %lld",&n,&m);
    for(int i=0;i<m;i++){
        int v1,v2;
        scanf("%lld %lld",&v1,&v2);
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
}