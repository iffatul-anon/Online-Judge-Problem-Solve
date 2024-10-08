#include<iostream>
#include<algorithm>
#include<vector>
#define int long long
using namespace std;
const int N=1e5+10;
vector<int>graph[N];
int vis[N],ans[N],f=0;
void dfs(int i,int c){
    c++;
    if((c%2==1 && ans[i]==2) || (c%2==0 && ans[i]==1)) f=1;
    if(vis[i]) return;
    if(c%2) ans[i]=1;
    else ans[i]=2;
    vis[i]=1;
    for(int j:graph[i]){
        dfs(j,c);
    }
    return;
}
signed main(){
    int n,m,a,b,c=0;
    scanf("%lld %lld",&n,&m);
    for(int i=0;i<m;i++) {
        scanf("%lld %lld",&a,&b);
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        if(vis[i]) continue;
        dfs(i,0);
    }
    if(f) printf("IMPOSSIBLE\n");
    else {
        for(int i=1;i<=n;i++) printf("%lld ",ans[i]);
        printf("\n");
    }
}