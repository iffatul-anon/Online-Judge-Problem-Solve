#include<iostream>
#include<algorithm>
#include<vector>
#define int long long
using namespace std;
const int N=1e5+10;
vector<int>graph[N];
int vis[N];
void dfs(int i){
    vis[i]=1;
    for(int j:graph[i]){
        if(vis[j]) continue;
        dfs(j);
    }
    return;
}
signed main(){
    int n,m,a,b,ans[N],c=0;
    scanf("%lld %lld",&n,&m);
    for(int i=0;i<m;i++) {
        scanf("%lld %lld",&a,&b);
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        if(vis[i]) continue;
        ans[c++]=i;
        dfs(i);
    }
    printf("%lld\n",c-1);
    for(int i=0;i<c-1;i++) printf("%lld %lld\n",ans[i],ans[i+1]);
}